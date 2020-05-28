package com.condelar.obj;

import java.util.ArrayList;

import com.condelar.obj.Consumidor;
import com.condelar.obj.Produtor;

public class Controle {
	private int qtdConsumidor;
	private int qtdProdutor;
	private ArrayList<Produtor> aP = new ArrayList<Produtor>();
	private ArrayList<Consumidor> aC = new ArrayList<Consumidor>();
	private Cesta cesta = new Cesta(100);

	public Controle(int p, int c) {
		this.qtdConsumidor = c;
		this.qtdProdutor = p;
	}

	public void producao() {
		Consumidor c;
		Produtor p;

		for (int i = 0; i < qtdProdutor; i++) {
			p = new Produtor(cesta, i, aC);
			aP.add(p);
		}

		for (int i = 0; i < qtdConsumidor; i++) {
			c = new Consumidor(cesta, i, aP);
			aC.add(c);
		}

		for (Produtor produtor : aP) {
			produtor.start();
		}

		for (Consumidor consumidor : aC) {
			consumidor.start();
		}

	}
	
	public Cesta getCesta() {
		return cesta;
	}

}
