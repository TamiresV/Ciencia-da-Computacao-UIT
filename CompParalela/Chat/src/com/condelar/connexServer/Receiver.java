package com.condelar.connexServer;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class Receiver extends Thread {

	private ObjectInputStream inPut;

	private User user;

	public Receiver(ObjectInputStream inPut) {
		this.inPut = inPut;

		start();
	}

	@SuppressWarnings("deprecation")
	public void run() {

		String inPutC;
		while (true) {
			try {
				inPutC = inPut.readUTF();
				System.out.println("c: " + inPutC);
				sendToAll(inPutC);
			} catch (IOException e) {
				user.getUserTools().remove(user);
				try {
					user.stopConexao();
				} catch (IOException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
				this.stop();

			}
		}
	}

	public void setUser(User user) {
		this.user = user;
	}

	public void sendToAll(String str) {
		for (User user : this.user.getUserTools()) {

			user.getSend().send(str);

		}
	}
}
