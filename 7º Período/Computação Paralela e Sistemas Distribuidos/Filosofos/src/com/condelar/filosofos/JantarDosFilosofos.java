package com.condelar.filosofos;

import com.condelar.View.Windows;

public class JantarDosFilosofos {
	public static void main (String[] args) {
		/* Mesa de jantar para os filósofos */
		
		
		Windows w = new Windows();
		MesaDeJantar mesa = new MesaDeJantar (w);
		
		///////////////////////////////////////////////////////////////////////////////////////
		
		w.start();
		

		
		/* Criação das threads representando os cinco filósofos */
		for (int filosofo = 0; filosofo < 5; filosofo++) {
			
			new Filosofo("Filosofo_" + filosofo, mesa, filosofo,w).start();
			
		}
	}
}
