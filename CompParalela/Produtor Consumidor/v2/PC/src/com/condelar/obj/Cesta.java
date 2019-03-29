package com.condelar.obj;

public class Cesta {
	private int qMax;
	private int qtd = 0;
	
	public Cesta(int qMax) {
		this.qMax = qMax;
	}
	
	public synchronized void produzir() {
		qtd++;
	}
	
	public synchronized void consumir() {
		qtd--;
	}

	public int getqMax() {
		return qMax;
	}

	public int getQtd() {
		return qtd;
	}
	
}
