package com.condelar.persistencia;

import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

import com.condelar.objetos.Data;
import com.mysql.jdbc.Connection;
import com.mysql.jdbc.PreparedStatement;
//import com.mysql.jdbc.Statement;

public class DataDAO {

	public static boolean inserir(Data data) throws SQLException {
		try {
			Connection conexao = (Connection) new Conexao().getConexao();
			PreparedStatement result = (PreparedStatement) conexao
					.prepareStatement("insert into dados (nome,email,tel,senha) values (?,?,?,?)");

			result.setString(1, data.getName());
			result.setString(2, data.geteMail());
			result.setString(3, data.getNumber());
			result.setString(4, data.getPassword());
			result.executeUpdate();

			/*
			 * Statement stmt = (Statement) conexao.createStatement(); //objeto comando sql
			 * 
			 * String comando = "insert into dados (nome,email,tel,senha) values ('" +
			 * data.getName() + "','" + data.geteMail() + "','" + data.getNumber() + "','" +
			 * data.getPassword() + "')";
			 * 
			 * stmt.executeUpdate(comando);
			 */

			conexao.close();
			return true;
		}catch (Exception e) {
			return false;
		}
	}

	public ArrayList<Data> listarTodos() throws SQLException {
		Connection conexao = (Connection) new Conexao().getConexao();
		ResultSet result = conexao.prepareStatement("select * from dados order by nome").executeQuery();

		ArrayList<Data> array = new ArrayList<Data>();

		Data dt;
		while (result.next()) {
			dt = new Data(result.getString("nome"), result.getString("email"), result.getString("tel"),
					result.getString("senha"));
			array.add(dt);
		}

		conexao.close();
		return array;
	}

}
