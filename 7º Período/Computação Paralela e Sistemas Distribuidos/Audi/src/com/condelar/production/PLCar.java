package com.condelar.production;

import java.util.ArrayList;

import com.condelar.objcts.Car;
import com.condelar.objcts.Cart;
import com.condelar.objcts.Component;

public class PLCar extends Thread {

	private PLBank plBank;
	private PLBodwork plBodwork;
	private PLElectronics plElectronics;
	private PLMotor plMotor;
	private PLTire plTire;

	private boolean tiresB;
	private boolean banksB;
	private boolean eletronicB;
	private boolean motorB;
	private boolean bodworkB;

	private Car car;
	private ArrayList<Component> tires;
	private ArrayList<Component> banks;
	private Component motor;
	private Component eletronic;
	private Component bodwork;

	private Cart cart = new Cart();
	private ArrayList<Cart> carts = new ArrayList<Cart>();

	private int totalOfCars = 0;
	private long tempoInicial;
	private long tempoFinal;
	private long tempoProducao;

	public PLCar() throws InterruptedException {
		this.setFalse();
		this.startPL();
		this.startC();
		tempoInicial = (int) System.currentTimeMillis();

	}

	public void startC() {
		tires = new ArrayList<Component>();
		banks = new ArrayList<Component>();
	}

	public synchronized void run() {
		// printHour();

		while (true) {
			
			this.check();

			if (tiresB && banksB && eletronicB && motorB && bodworkB) {
				car = new Car(banks, tires, motor, eletronic, bodwork);
				// printHour();
				tempoFinal = (int) System.currentTimeMillis();
				
				tempoProducao = (tempoFinal - tempoInicial);
				tempoInicial = tempoFinal;
				startC();
				this.setFalse();
				this.addCart();
			}
		}
	}

	private synchronized void check() {
		if (plBank.getStock().getComponentsQuantity() > 5 && plTire.getStock().getComponentsQuantity() > 4
				&& plMotor.getStock().inStock() && plBodwork.getStock().inStock()
				&& plElectronics.getStock().inStock()) {

			if (!banksB) {
				for (int i = 0; i < 5; i++) {
					banks.add(plBank.getStock().useComponent());
					banksB = true;
				}
			}

			if (!tiresB) {
				for (int i = 0; i < 4; i++) {
					tires.add(plTire.getStock().useComponent());
					tiresB = true;
				}
			}

			// Motos
			if (!motorB) {
				motor = plMotor.getStock().useComponent();
				motorB = true;
			}

			// Carroceria
			if (!bodworkB) {
				bodwork = plBodwork.getStock().useComponent();
				bodworkB = true;
			}

			// Eletronicos
			if (!eletronicB) {
				eletronic = plElectronics.getStock().useComponent();
				eletronicB = true;
			}
		}
	}

	private void addCart() {
		totalOfCars++;
		boolean add = cart.addCar(car);
		if (!add) {
			carts.add(cart);
			cart = new Cart();
			cart.addCar(car);
		}
		car = null;
	}

	private void setFalse() {
		this.banksB = false;
		this.bodworkB = false;
		this.motorB = false;
		this.eletronicB = false;
		this.tiresB = false;
	}

	private void startPL() throws InterruptedException {

		plBank = new PLBank();
		plBodwork = new PLBodwork();
		plElectronics = new PLElectronics();
		plMotor = new PLMotor();
		plTire = new PLTire();

		plBank.start();
		plBodwork.start();
		plElectronics.start();
		plMotor.start();
		plTire.start();
	}
	
	public long getTempo() {
		return tempoProducao;
	}

	public PLBank getPlBank() {
		return plBank;
	}

	public PLBodwork getPlBodwork() {
		return plBodwork;
	}

	public PLElectronics getPlElectronics() {
		return plElectronics;
	}

	public PLMotor getPlMotor() {
		return plMotor;
	}

	public PLTire getPlTire() {
		return plTire;
	}

	public int getTotalOfCar() {
		return this.totalOfCars;
	}

	public int getTotalCats() {
		return this.carts.size();
	}

	public int getTotalInCart() {
		return this.cart.getTotalCars();
	}

}
