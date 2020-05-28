package com.example.irecomend.model.dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import com.example.irecomend.connection.Conexao;
import com.example.irecomend.model.bean.Evento;
import com.example.irecomend.model.bean.Imagem;

import java.util.ArrayList;

import static com.facebook.FacebookSdk.getApplicationContext;
import static com.facebook.FacebookSdk.isLegacyTokenUpgradeSupported;

public class ImagemDAO {
    private Conexao conexao;
    private SQLiteDatabase banco;
    private String tabela;
    private String query;
    private Context context;

    public ImagemDAO(Context context){
        this.context = context;
        this.conexao = new Conexao(context);
        this.banco = this.conexao.getWritableDatabase();
        this.tabela = "IMAGEM";
    }
    public long inserirImagem(Imagem imagem){
        ContentValues values = new ContentValues();
        values.put("nome", imagem.getNome());
        values.put("caminho", imagem.getCaminho());
        values.put("idEvento", imagem.getEvento().getIdEvento());

        return banco.insert(this.tabela, null, values);
    }
//
//    public boolean atualizarImagem(Imagem imagem){
//
//    }
//
//    public boolean deletarImagem(Imagem imagem){
//
//    }
//
    public ArrayList<Imagem> selecionaTodasImagens(){
        ArrayList<Imagem> imagens = new ArrayList<>();
        String[] args = {"idImagem", "nome", "caminho", "idEvento"};
        Cursor cursor = this.banco.query(this.tabela,args, null, null, null, null, null, null);

        while(cursor.moveToNext()){
            EventoDAO eventoDAO = new EventoDAO(this.context);
            Imagem imagem = new Imagem();
            imagem.setIdImagem(cursor.getInt(0));
            imagem.setNome(cursor.getString(1));
            imagem.setCaminho(cursor.getString(2));
            imagem.setEvento(eventoDAO.selecionaEventoById(cursor.getInt(3)));

            imagens.add(imagem);
        }

        return imagens;

    }

    public Imagem selecionaImagemById(int id){
        Imagem imagem = new Imagem();
        String[] args = {"idImagem", "nome", "caminho", "idEvento"};
        String[] params = {String.valueOf(id)};
        Cursor cursor = this.banco.query(this.tabela, args, "IDIMAGEM = ?", params, null, null, null, null);

        if(cursor.moveToNext()){
            EventoDAO eventoDAO = new EventoDAO(this.context);
            imagem.setIdImagem(cursor.getInt(0));
            imagem.setNome(cursor.getString(1));
            imagem.setCaminho(cursor.getString(2));
            imagem.setEvento(eventoDAO.selecionaEventoById(cursor.getInt(3)));
        }

        return imagem;
    }
//    public void criaTabela(){
//
//    }
}
