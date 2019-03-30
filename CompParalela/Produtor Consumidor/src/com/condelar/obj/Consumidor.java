package com.condelar.obj;

import java.util.ArrayList;

public class Consumidor extends Thread {
	private Cesta cesta;
	private int n;
	private ArrayList<Produtor> aP;

	public Consumidor(Cesta cesta, int n, ArrayList<Produtor> aP) {
		this.cesta = cesta;
		this.n = n;
		this.aP = aP;
	}

	public void run() {
		while (true) {

			if (cesta.getQtd() > 0) {
				acao();

			} else {

				for (Produtor produtor : aP) {
					synchronized (produtor) {
						produtor.notify();
					}
				}
				try {
					synchronized (this) {
						this.wait();
					}

				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}

		}

	}

	private synchronized void acao() {
		try {
			sleep(400);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		cesta.consumir(n);
		//System.out.println("Consumidor " + n);
	}

}
