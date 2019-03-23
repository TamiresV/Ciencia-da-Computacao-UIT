package com.condelar.persistencia;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class Conexao {
	private String banco;
	private String host;
	private String usuario;
	private String senha;

	public Conexao() {
		this.banco = "tp2";
		this.host = "localhost";
		this.usuario = "root";
		this.senha = "35741458";
	}

	public Connection getConexao() throws SQLException {
		String url = "jdbc:mysql://" + this.host + "/" + this.banco;
		return DriverManager.getConnection(url, this.usuario, this.senha);
	}
}
