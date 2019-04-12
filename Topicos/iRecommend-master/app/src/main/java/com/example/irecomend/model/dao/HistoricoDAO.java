package com.example.irecomend.model.dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import com.example.irecomend.connection.Conexao;
import com.example.irecomend.model.bean.Historico;

import java.util.ArrayList;

public class HistoricoDAO {
    private Conexao conexao;
    private SQLiteDatabase banco;
    private String tabela;
    private String query;
    private Context context;

    public HistoricoDAO(Context context){
        this.conexao = new Conexao(context);
        this.context = context;
        this.banco = this.conexao.getWritableDatabase();
        this.tabela = "HISTORICO";
    }
    public long inserirHistorico(Historico historico){
        ContentValues values = new ContentValues();
        values.put("idCliente", historico.getCliente().getIdCliente());
        values.put("idAcaoHistorico", historico.getAcaoHistorico().getIdAcaoHistorico());
        values.put("idEvento", historico.getEvento().getIdEvento());

        return banco.insert(this.tabela, null, values);
    }
//
//    public boolean atualizarHistorico(Historico historico){
//
//    }
//
//    public boolean deletarHistorico(Historico historico){
//
//    }

    public ArrayList<Historico> selecionaTodosHistoricos(){
        ArrayList<Historico> historicos = new ArrayList<>();
        String[] args = {"idHistorico", "idCliente", "idAcaoHistorico", "idEvento"};
        Cursor cursor = this.banco.query(this.tabela, args, null, null, null, null, null, null);

        while(cursor.moveToNext()){
            ClienteDAO clienteDAO = new ClienteDAO(this.context);
            EventoDAO eventoDAO = new EventoDAO(this.context);
            AcaoHistoricoDAO acaoHistoricoDAO = new AcaoHistoricoDAO(this.context);
            Historico historico = new Historico();

            historico.setIdHistorico(cursor.getInt(0));
            historico.setCliente(clienteDAO.selecionaClienteById(cursor.getInt(1)));
            historico.setAcaoHistorico(acaoHistoricoDAO.selecionaAcaoHistoricoById(cursor.getInt(2)));
            historico.setEvento(eventoDAO.selecionaEventoById(cursor.getInt(3)));

            historicos.add(historico);
        }

        return historicos;
    }

    public Historico selecionaHistoricoById(int id){
        Historico historico = new Historico();
        String[] args = {"idHistorico", "idCliente", "idAcaoHistorico", "idEvento"};
        String[] params = {String.valueOf(id)};
        Cursor cursor = this.banco.query(this.tabela, args, "IDHISTORICO = ?", params, null, null, null, null);

        if(cursor.moveToNext()){
            EventoDAO eventoDAO = new EventoDAO(this.context);
            ClienteDAO clienteDAO = new ClienteDAO(this.context);
            AcaoHistoricoDAO acaoHistoricoDAO = new AcaoHistoricoDAO(this.context);
            historico.setIdHistorico(cursor.getInt(0));
            historico.setCliente(clienteDAO.selecionaClienteById(cursor.getInt(1)));
            historico.setAcaoHistorico(acaoHistoricoDAO.selecionaAcaoHistoricoById(cursor.getInt(2)));
            historico.setEvento(eventoDAO.selecionaEventoById(cursor.getInt(3)));

        }
        return historico;
    }
//    public void criaTabela(){
//
//    }

}
