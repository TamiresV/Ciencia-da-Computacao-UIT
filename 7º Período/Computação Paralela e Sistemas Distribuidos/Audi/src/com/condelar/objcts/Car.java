package com.condelar.objcts;

import java.util.ArrayList;

/**
 * Classe do Objeto carro o estoque do tipo de Carroceria.
 * 
 * @author Gilmar Resende, Tamires Vilaça, Victor Campos
 * @since 2019/03/17
 */
public class Car {

	private ArrayList<Component> bank = new ArrayList<Component>();
	private ArrayList<Component> tire = new ArrayList<Component>();
	private Component motor;
	private Component eletronic;
	private Component bodwoek;

	/**
	 * Construto, onde recebe todos os componetes que o carro tem.
	 * 
	 * @param bank      Bancos do carro.
	 * @param tire      Pneus do carro.
	 * @param motor     Motor do carro.
	 * @param eletronic Eletrinicos do carro.
	 * @param bodwoek   Carroceria do carro.
	 */
	public Car(ArrayList<Component> bank, ArrayList<Component> tire, Component motor, Component eletronic,
			Component bodwoek) {
		this.bank = bank;
		this.tire = tire;
		this.motor = motor;
		this.eletronic = eletronic;
		this.bodwoek = bodwoek;
	}

}
