package com.condelar.connexServer;

import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.Scanner;

public class Send {

	private ObjectOutputStream outPut;
	private User user;

	public Send(ObjectOutputStream outPut) {
		this.outPut = outPut;

	}

	@SuppressWarnings("deprecation")
	public void send(String inPutT) {

		try {
			outPut.writeUTF(inPutT);
			outPut.flush();
		} catch (IOException e) {
			user.getUserTools().remove(user);
			try {
				user.stopConexao();
			}catch (IOException e1) {
				// TODO Auto-generated catch block
				e1.printStackTrace();
			}
			user.getUserTools().remove(user);
			user.getReceiver().stop();
			
		}
	}
	public void setUser(User user) {
		this.user = user;
	}
	

}
