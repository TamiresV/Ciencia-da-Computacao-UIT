package com.condelar.procedimento;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.sql.SQLException;

import com.condelar.objetos.Data;
import com.condelar.persistencia.DataDAO;

public class Processo extends Thread {
	private ObjectInputStream entrada;
	private ObjectOutputStream saida;

	public Processo(ObjectInputStream entrada, ObjectOutputStream saida) {
		this.entrada = entrada;
		this.saida = saida;
	}

	public void run() {
		try {
			devolverResp(DataDAO.inserir(receberData()));
		} catch (IOException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

	public Data receberData() throws IOException {
		return new Data(entrada.readUTF(), entrada.readUTF(), entrada.readUTF(), entrada.readUTF());
	}

	public void devolverResp(boolean control) throws IOException {
		saida.writeBoolean(control);
		saida.flush();
	}

}
