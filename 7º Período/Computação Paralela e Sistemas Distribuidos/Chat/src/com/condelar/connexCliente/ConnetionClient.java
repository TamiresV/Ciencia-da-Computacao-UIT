package com.condelar.connexCliente;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.net.UnknownHostException;

import com.condelar.view.jframeCliente.Windows;

public class ConnetionClient {

	private int portaServidor = 1235;

	private ObjectOutputStream saida;
	private ObjectInputStream entrada;
	private Socket socket;

	public ConnetionClient(String username) throws UnknownHostException, IOException {
		socket = new Socket("localhost", portaServidor);

		saida = new ObjectOutputStream(socket.getOutputStream()); // objeto que envia informações criado

		entrada = new ObjectInputStream(socket.getInputStream()); // objeto que recebe informações criado
		Windows w = null;

		w = new Windows(new Send(saida, w, username));
		new Receiver(entrada, w);
		w.start();
	}
}
