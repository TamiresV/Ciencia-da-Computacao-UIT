package com.example.irecomend.model.dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.view.View;

import com.example.irecomend.connection.Conexao;
import com.example.irecomend.model.bean.Cliente;
import com.twitter.sdk.android.core.models.TwitterCollection;

import java.util.ArrayList;

public class ClienteDAO {
    private Conexao conexao;
    private SQLiteDatabase banco;
    private String tabela;
    private String query;
    private Context context;

    public ClienteDAO(Context context){
        this.conexao = new Conexao(context);
        this.context = context;
        this.banco = this.conexao.getWritableDatabase();
        this.tabela = "CLIENTE";
    }


    public long inserirCliente(Cliente cliente){
        ContentValues values = new ContentValues();
        values.put("nome", cliente.getNome());
        values.put("sobrenome", cliente.getSobrenome());
        values.put("email", cliente.getEmail());
        values.put("senha", cliente.getSenha());
        return banco.insert(this.tabela, null, values);
    }
//
//    public boolean atualizarCliente(Cliente cliente){
//
//    }
//
//    public boolean deletarCliente(Cliente cliente){
//
//    }
//
    public ArrayList<Cliente> selecionaTodosClientes(){
        ArrayList<Cliente> clientes = new ArrayList<>();
        String[] args = {"idCliente", "nome", "sobrenome", "email", "senha"};
        Cursor cursor = this.banco.query(this.tabela, args, null, null, null, null, null, null);

        while(cursor.moveToNext()){
            Cliente cliente = new Cliente();
            cliente.setIdCliente(cursor.getInt(0));
            cliente.setNome(cursor.getString(1));
            cliente.setSobrenome(cursor.getString(2));
            cliente.setEmail(cursor.getString(3));
            cliente.setSobrenome(cursor.getString(4));

            clientes.add(cliente);
        }

        return clientes;

    }

    public Cliente selecionaClienteById(int id){
        Cliente cliente = new Cliente();
        String[] args = {"idCliente", "nome", "sobrenome", "email", "senha"};
        String[] params = {String.valueOf(id)};
        Cursor cursor = this.banco.query(this.tabela, args, "IDCLIENTE = ?", params, null, null, null, null);
        if(cursor.moveToNext()){
            cliente.setIdCliente(cursor.getInt(0));
            cliente.setNome(cursor.getString(1));
            cliente.setSobrenome(cursor.getString(2));
            cliente.setEmail(cursor.getString(3));
            cliente.setSobrenome(cursor.getString(4));
        }

        return cliente;
    }

    public Cliente selecionaClienteByEmail(String email){
        Cliente cliente = new Cliente();
        String[] args = {"idCliente", "nome", "sobrenome", "email", "senha"};
        String[] params = {String.valueOf(email)};
        Cursor cursor = this.banco.query(this.tabela, args, "email = ?", params, null, null, null, null);
        if(cursor.moveToNext()){
            cliente.setIdCliente(cursor.getInt(0));
            cliente.setNome(cursor.getString(1));
            cliente.setSobrenome(cursor.getString(2));
            cliente.setEmail(cursor.getString(3));
            cliente.setSenha(cursor.getString(4));
        }
        return cliente;
    }
//    public void criaTabela(){
//
//    }
}
