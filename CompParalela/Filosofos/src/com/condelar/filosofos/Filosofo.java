package com.condelar.filosofos;

import com.condelar.View.Windows;

public class Filosofo extends Thread {
	/* Tempo máximo (em milesegundos) que o filósofo vai comer ou pensar */
	final static int TEMPO_MAXIMO = 100;
	
	/* Referência à mesa de jantar */
	MesaDeJantar mesa;
	Windows windows;
	
	/* Filósofo na mesa [0,1,2,3,4] quantidade de filósofos*/
	int filosofo;
	
	public Filosofo (String nomeThread, MesaDeJantar mesa, int filosofo,Windows w) {
		/* construtor da classe pai */
		super(nomeThread);
		this.windows = w;
		this.mesa = mesa;
		this.filosofo = filosofo;
	}
	
	public void run () {
		int tempo = 0;
		/* Laço representando a vida de um filósofo : pensar e comer */
		while (true) {
			/* sorteando o tempo pelo qual o filósofo vai pensar */
			tempo = (int) (Math.random() * TEMPO_MAXIMO);
			/* filósofo pensando */
			pensar(tempo);
			/* filósofo pegando garfos */
			pegarGarfos();
			/* sorteando o tempo pelo qual o filósofo vai comer */
			tempo = (int) (Math.random() * TEMPO_MAXIMO);
			/* filósofo comendo */
			comer(tempo);
			/* filósofo devolvendo garfos */
			devolverGarfos();
		}
	}
	
	/* simula o filósofo pensando */
	private void pensar (int tempo) {
		try {
			/* filósofo dorme de tempo milisegundos */
			sleep(tempo);
		} catch (InterruptedException e){
			System.out.println("Filófoso pensou demais, morreu =) ");
		}
	}
	/* simula o filósofo comendo */
	private void comer (int tempo) {
		try {
			sleep(tempo);
		} catch (InterruptedException e){
			System.out.println("Filófoso comeu demais, morreu");
		}
	}
	/* pega os garfos */
	private void pegarGarfos() {
		mesa.pegandoGarfos(filosofo);
	}
	/* devolve os garfos */
	private void devolverGarfos() {
		mesa.devolvendoGarfos(filosofo);
	}
}
