package com.condelar.connexCliente;


import java.io.IOException;
import java.io.ObjectInputStream;

import com.condelar.view.jframeCliente.*;

public class Receiver extends Thread {

	private ObjectInputStream inPut;
	private Windows w;

	public Receiver(ObjectInputStream inPut, Windows w) {
		this.inPut = inPut;
		this.w = w;
		start();

	}

	public void run() {
		
		
		String inPutC = "0";
		while (!inPutC.equals("000")) {
			try {
				inPutC = inPut.readUTF();
				w.windowsUpdate(inPutC);
				
				System.out.println("s: " + inPutC);
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}
