package com.condelar.connexServer;


import java.io.IOException;
import java.net.Socket;
import java.util.ArrayList;

public class User {
	private Receiver receiver;
	private Send send;
	private ArrayList<User> userTools;
	private Socket conexao;
	
	public User(Send send,Receiver receiver, ArrayList<User> users,Socket conexao) {
		this.receiver = receiver;
		this.send = send;
		this.userTools = users;
		this.conexao = conexao;
		
		this.receiver.setUser(this);
		this.send.setUser(this);
		
	}
	
	public  ArrayList<User> getUserTools(){
		return this.userTools;
	}
	
	public Send getSend() {
		return this.send;
	}
	
	public Receiver getReceiver() {
		return this.receiver;
	}
	
	public void stopConexao() throws IOException {
		this.conexao.close();
	}
	
	

}
