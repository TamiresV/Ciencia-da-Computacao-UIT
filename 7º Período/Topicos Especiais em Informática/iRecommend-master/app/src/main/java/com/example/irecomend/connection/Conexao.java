package com.example.irecomend.connection;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import com.example.irecomend.model.bean.Cliente;
import com.example.irecomend.model.dao.ClienteDAO;

import java.util.ArrayList;

public class Conexao extends SQLiteOpenHelper{

    private static final String name = "db";
    private static final int version = 1;
    private String scriptGeral = "";
    private ArrayList<String> scripts;


    public Conexao(Context context) {
        super(context, name, null, version);
        //this.preencheScripts();
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        db.execSQL("CREATE TABLE Evento (" +
                "  idEvento INTEGER PRIMARY KEY AUTOINCREMENT," +
                "  nome TEXT," +
                "  data NUMERIC," +
                "  preco REAL," +
                "  likes INTEGER," +
                "  deslike INTEGER," +
                "  endereco TEXT," +
                "  numero INTEGER," +
                "  bairro TEXT," +
                "  cidade TEXT," +
                "  estado TEXT," +
                "  cep TEXT," +
                "  pais TEXT," +
                "  latitude TEXT," +
                "  longitude TEXT)");

        db.execSQL("CREATE TABLE Cliente (" +
                "  idCliente INTEGER PRIMARY KEY AUTOINCREMENT," +
                "  nome TEXT," +
                "  sobrenome TEXT," +
                "  email TEXT," +
                "  senha TEXT);");

        db.execSQL("CREATE TABLE AcaoHistorico (" +
                "  idAcaoHistorico INTEGER PRIMARY KEY AUTOINCREMENT," +
                "  descricao TEXT);");

        db.execSQL("CREATE TABLE Imagem (" +
                "  idImagem INTEGER PRIMARY KEY AUTOINCREMENT," +
                "  nome TEXT," +
                "  caminho TEXT," +
                "  idEvento INTEGER," +
                "    FOREIGN KEY (idEvento)" +
                "    REFERENCES Evento (idEvento)" +
                "    ON DELETE CASCADE" +
                "    ON UPDATE CASCADE);");

        db.execSQL("CREATE TABLE Historico (" +
                "  idHistorico INTEGER PRIMARY KEY AUTOINCREMENT," +
                "  idCliente INTEGER," +
                "  idEvento INTEGER," +
                "  idAcaoHistorico INTEGER," +
                "    FOREIGN KEY (idCliente)" +
                "    REFERENCES Cliente (idCliente)" +
                "    ON DELETE CASCADE" +
                "    ON UPDATE CASCADE," +
                "    FOREIGN KEY (idEvento)" +
                "    REFERENCES Evento (idEvento)" +
                "    ON DELETE CASCADE" +
                "    ON UPDATE CASCADE," +
                "    FOREIGN KEY (IdAcaoHistorico)" +
                "    REFERENCES AcaoHistorico (idAcaoHistorico)" +
                "    ON DELETE CASCADE" +
                "    ON UPDATE CASCADE);");
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }

    private void preencheScripts(){
        this.scripts = new ArrayList<>();
//        this.scriptCliente();
        this.scriptEvento();
//        this.scriptAcaoHistorico();
//        this.scriptImagem();
//        this.scriptHistorico();
    }
    private void scriptCliente(){ //Script índice 0
        this.scripts.add("CREATE TABLE Cliente (" +
                "  idCliente INT NOT NULL PRIMARY KEY AUTOINCREMENT," +
                "  nome TEXT NOT NULL," +
                "  sobrenome TEXT NOT NULL," +
                "  email TEXT NOT NULL," +
                "  senha TEXT NOT NULL);");
    }

    private void scriptEvento(){ //Script índice 1
        this.scripts.add("CREATE TABLE Evento (" +
                "  idEvento INT NOT NULL PRIMARY KEY AUTOINCREMENT," +
                "  nome TEXT," +
                "  data DATETIME," +
                "  preco DECIMAL(10,2)," +
                "  likes INT," +
                "  deslike INT," +
                "  endereco TEXT," +
                "  numero INT," +
                "  bairro TEXT," +
                "  cidade TEXT," +
                "  estado TEXT," +
                "  cep TEXT," +
                "  pais TEXT," +
                "  latitude TEXT," +
                "  longitude TEXT);");
    }
    private void scriptAcaoHistorico(){ //Script índice 2
        this.scripts.add("CREATE TABLE AcaoHistorico (\n" +
                "  idAcaoHistorico INT NOT NULL PRIMARY KEY AUTOINCREMENT,\n" +
                "  descricao TEXT NULL);");
    }
    private void scriptImagem() { //Script índice 3
        this.scripts.add("CREATE TABLE Imagem (\n" +
                "  idImagem INT NOT NULL PRIMARY KEY AUTOINCREMENT,\n" +
                "  nome TEXT NULL,\n" +
                "  caminho TEXT NULL,\n" +
                "  idEvento INT NOT NULL,\n" +
                "    FOREIGN KEY (idEvento)\n" +
                "    REFERENCES Evento (idEvento)\n" +
                "    ON DELETE CASCADE\n" +
                "    ON UPDATE CASCADE);");
    }
    private void scriptHistorico(){ //Script índice 4
        this.scripts.add("CREATE TABLE Historico (\n" +
                "  idHistorico INT NOT NULL PRIMARY KEY AUTOINCREMENT,\n" +
                "  idCliente INT NOT NULL,\n" +
                "  idEvento INT NOT NULL,\n" +
                "  idAcaoHistorico INT NOT NULL,\n" +
                "    FOREIGN KEY (idCliente)\n" +
                "    REFERENCES Cliente (idCliente)\n" +
                "    ON DELETE CASCADE\n" +
                "    ON UPDATE CASCADE,\n" +
                "    FOREIGN KEY (idEvento)\n" +
                "    REFERENCES Evento (idEvento)\n" +
                "    ON DELETE CASCADE\n" +
                "    ON UPDATE CASCADE,\n" +
                "    FOREIGN KEY (IdAcaoHistorico)\n" +
                "    REFERENCES AcaoHistorico (idAcaoHistorico)\n" +
                "    ON DELETE CASCADE\n" +
                "    ON UPDATE CASCADE);");
    }

    public static final String COL_1 = "idCliente";
    public static final String COL_2 = "email";
    public static final String COL_3 = "senha";
    public static final String TABLE_NAME = "Cliente";


}
