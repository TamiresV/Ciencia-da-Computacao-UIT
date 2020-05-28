package com.condelar.obj;

import java.util.ArrayList;

public class Produtor extends Thread {

	private Cesta cesta;
	private int n;
	private ArrayList<Consumidor> c;

	public Produtor(Cesta cesta, int n, ArrayList<Consumidor> c) {
		this.cesta = cesta;
		this.n = n;
		this.c = c;
	}

	public void run() {

		while (true) {

			if (cesta.getQtd() < cesta.getqMax()) {
				acao();

			} else {
				try {
					for (Consumidor consumidor : c) {
						synchronized (consumidor) {
							consumidor.notifyAll();
						}
					}
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
		cesta.produzir(n);
		//System.out.println("Produtor " + n);
	}

}
