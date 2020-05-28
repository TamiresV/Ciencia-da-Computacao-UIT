package com.example.irecomend.model.dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import com.example.irecomend.connection.Conexao;
import com.example.irecomend.model.bean.Evento;

import java.util.ArrayList;
import java.util.List;

public class EventoDAO {
    private String tabela;
    private Conexao conexao;
    private SQLiteDatabase banco;
    private String query;
    private Context context;

    public EventoDAO(Context context){
        this.conexao = new Conexao(context);
        this.context = context;
        this.banco = conexao.getWritableDatabase();
        this.tabela = "EVENTO";
    }

    public long inserirEvento(Evento evento){
        ContentValues values = new ContentValues();
        values.put("nome", evento.getNome());
        values.put("data", evento.getDataHora());
        values.put("preco", evento.getPreco());
        values.put("endereco", evento.getEndereco());
        values.put("numero", evento.getNumero());
        values.put("bairro", evento.getBairro());
        values.put("cep", evento.getCep());
        values.put("cidade", evento.getCidade());
        values.put("estado", evento.getEstado());
        values.put("pais", evento.getPais());
        values.put("likes", evento.getLikes());
        values.put("deslike", evento.getDeslikes());
        values.put("latitude", evento.getLatitude());
        values.put("longitude", evento.getLongitude());

        return banco.insert(this.tabela, null, values);
    }
//
//    public boolean atualizarEvento(Evento evento){
//
//    }
//
//    public boolean deletarEvento(Evento evento){
//
//    }
//
    public List<Evento> selecionaTodosEventos(){
        List<Evento> eventos = new ArrayList<>();
        String[] args = {"id", "nome", "data", "preco", "endereco", "cep", "numero",
            "bairro", "cidade", "estado", "pais", "latitude", "longitude", "likes", "deslike"};
        Cursor cursor = banco.query(this.tabela, args, null, null,null,null,null);

        while(cursor.moveToNext()) {
            Evento ev = new Evento(cursor.getString(1), cursor.getString(2), cursor.getFloat(3), cursor.getString(4),
                    cursor.getString(5), cursor.getInt(6), cursor.getString(7), cursor.getString(8), cursor.getString(9),
                    cursor.getString(10));
            ev.setIdEvento(cursor.getInt(0));
            ev.setLatitude(cursor.getString(11));
            ev.setLongitude(cursor.getString(12));
            ev.setLikes(cursor.getInt(13));
            ev.setDeslikes(cursor.getInt(14));

            eventos.add(ev);
        }

        return eventos;
    }
//
    public Evento selecionaEventoById( int id){
        Evento evento = new Evento();
        String[] params = {String.valueOf(id)};
        String[] args = {"idEvento", "nome", "data", "preco", "endereco", "cep", "numero",
                "bairro", "cidade", "estado", "pais", "latitude", "longitude", "likes", "deslike"};
        Cursor cursor = banco.query(this.tabela, args, " idEvento = ? ", params, null, null, null);


        if(cursor.moveToNext()){
            evento.setIdEvento(cursor.getInt(0));
            evento.setNome(cursor.getString(1));
            evento.setDataHora(cursor.getString(2));
            evento.setPreco(cursor.getFloat(3));
            evento.setEndereco(cursor.getString(4));
            evento.setCep(cursor.getString(5));
            evento.setNumero(cursor.getInt(6));
            evento.setBairro(cursor.getString(7));
            evento.setCidade(cursor.getString(8));
            evento.setEstado(cursor.getString(9));
            evento.setPais(cursor.getString(10));
            evento.setLatitude(cursor.getString(11));
            evento.setLongitude(cursor.getString(12));
            evento.setLikes(cursor.getInt(13));
            evento.setDeslikes(cursor.getInt(14));
        }

        return evento;
    }
//    public void criaTabela(){
//
//    }
}
