package com.condelar.connectionServer;

import java.io.*;
import java.net.*;

import com.condelar.procedimento.Processo;

public class ConnectionServe {

	private int portaServidor = 1234;
	private ServerSocket socket;
	private Socket conexao;
	private ObjectOutputStream saida;
	private ObjectInputStream entrada;

	public ConnectionServe() throws Exception {

		socket = new ServerSocket(portaServidor);

		System.out.println("Aguardando Cliente ...");

		while (true) {
			conexao = socket.accept();
			saida = new ObjectOutputStream(conexao.getOutputStream());
			entrada = new ObjectInputStream(conexao.getInputStream());
			new Processo(entrada, saida).start();
		}
	}
}