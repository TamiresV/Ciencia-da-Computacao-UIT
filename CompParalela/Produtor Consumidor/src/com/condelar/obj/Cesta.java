package com.condelar.obj;

public class Cesta {
	private int qMax;
	private int qtd = 0;
	private boolean produzindo;
	private int nP, nC;
	
	public Cesta(int qMax) {
		this.qMax = qMax;
	}
	
	public synchronized void produzir(int n) {
		if(qtd < qMax) {
			nP = n;
			produzindo = true;
			qtd++;
		}
		
	}
	
	public synchronized void consumir(int n) {
		if(qtd>0) {
			nC = n;
			produzindo = false;
			qtd--;
		}
		
	}

	public int getnP() {
		return nP;
	}

	public int getnC() {
		return nC;
	}

	public int getqMax() {
		return qMax;
	}

	public int getQtd() {
		return qtd;
	}
	
	public boolean getProduzindo() {
		return produzindo;
	}
	
}
