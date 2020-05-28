package com.condelar.objetos;

public class Data {
	private String name;
	private String eMail;
	private String number;
	private String password;

	public Data(String name, String eMail, String number, String password) {
		this.name = name;
		this.eMail = eMail;
		this.number = number;
		this.password = password;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String geteMail() {
		return eMail;
	}

	public void seteMail(String eMail) {
		this.eMail = eMail;
	}

	public String getNumber() {
		return number;
	}

	public void setNumber(String number) {
		this.number = number;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}
	
	

}
