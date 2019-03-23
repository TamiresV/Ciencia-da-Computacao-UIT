package com.condelar.connexCliente;

import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.Scanner;

import com.condelar.view.jframeCliente.Windows;

public class Send{
	
	private ObjectOutputStream outPut;
	private static Scanner scan;
	private Windows w;
	private String userName;
	
	public Send(ObjectOutputStream outPut, Windows w, String userName) {
		this.outPut = outPut;
		this.w = w;
		this.userName = userName;
		//this.start();
	}
	
	public void run(String inPutT) {
		
		//String inPutT = "0";
		
		//scan = new Scanner(System.in);
		
			//inPutT = scan.nextLine();
			try {
				outPut.writeUTF(userName + ": " + inPutT);
				outPut.flush();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		
	}
	
	public ObjectOutputStream getSend() {
		return this.outPut;
		
	}

}
