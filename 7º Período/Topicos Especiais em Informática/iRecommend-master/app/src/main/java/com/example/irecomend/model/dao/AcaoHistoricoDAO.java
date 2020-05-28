package com.example.irecomend.model.dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import com.example.irecomend.connection.Conexao;
import com.example.irecomend.model.bean.AcaoHistorico;

import java.util.ArrayList;
import java.util.List;

public class AcaoHistoricoDAO {
    private Conexao conexao;
    private SQLiteDatabase banco;
    private String tabela;
    private String query;
    private Context context;

    public AcaoHistoricoDAO(Context context) {
        this.conexao = new Conexao(context);
        this.context = context;
        this.banco = this.conexao.getWritableDatabase();
        this.tabela = "ACAOHISTORICO";
    }

    public long inseriraAcaoHistorico(AcaoHistorico acaoHistorico){
        ContentValues values = new ContentValues();
        values.put("descricao", acaoHistorico.getDescricao());

        return banco.insert(this.tabela, null, values);
    }
//
//    public boolean atualizarAcaoHistorico(AcaoHistorico acaoHistorico){
//
//    }
//
//    public boolean deletarAcaoHistorico(AcaoHistorico acaoHistorico){
//
//    }
//
    public List<AcaoHistorico> selecionaTodosAcaoHistoricos(){
        List<AcaoHistorico> acaoHistoricos = new ArrayList<>();
        String args[] = {"idAcaoHistorico", "descricao"};
        Cursor cursor = this.banco.query(this.tabela, args, null, null, null, null, null, null);

        while(cursor.moveToNext()){
            AcaoHistorico ac = new AcaoHistorico(cursor.getString(1));
            ac.setIdAcaoHistorico(cursor.getInt(0));

            acaoHistoricos.add(ac);
        }

            return acaoHistoricos;
    }

    public AcaoHistorico selecionaAcaoHistoricoById(int id){
        AcaoHistorico acaoHistorico = new AcaoHistorico();
        String[] args = {"idAcaoHistorico", "descricao"};
        String[] params = {String.valueOf(id)};
        Cursor cursor = this.banco.query(this.tabela, args, "IDACAOHISTORICO = ?", params, null, null, null, null);

        if(cursor.moveToNext()){
            acaoHistorico.setIdAcaoHistorico(cursor.getInt(0));
            acaoHistorico.setDescricao(cursor.getString(1));
        }

        return acaoHistorico;
    }
//    public void criaTabela(){
//
//    }
}
