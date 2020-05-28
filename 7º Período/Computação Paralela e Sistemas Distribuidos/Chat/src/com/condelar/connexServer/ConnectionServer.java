package com.condelar.connexServer;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.ArrayList;

public class ConnectionServer {

	private int portServer = 1235;

	ServerSocket socket;
	Socket conexao;
	ObjectOutputStream saida;
	ObjectInputStream entrada;
	
	ArrayList<User> userTools = new ArrayList<User>();

	public ConnectionServer() throws IOException {

		// Socket de Servidor
		socket = new ServerSocket(portServer);

		System.out.println("Aguardando Cliente ...");
		// Aceitar conexao
		while(true) {
			conexao = socket.accept();

			saida = new ObjectOutputStream(conexao.getOutputStream());
			// System.out.println("saida criada");
			entrada = new ObjectInputStream(conexao.getInputStream());
			// System.out.println("entrada criada");
			
			//Receiver receber = new Receiver(entrada);
			userTools.add(new User(new Send(saida), new Receiver(entrada), userTools,conexao));
			
			

		}
	}

}
