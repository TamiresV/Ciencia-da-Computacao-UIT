package com.condelar.objcts;

import java.util.ArrayList;

/**
 * Classe que representa os componentes do carro.
 * 
 * @author Gilmar Resende, Tamires Vilaça, Victor Campos
 * @since 2019/03/17
 */
public class Cart {
	private ArrayList<Car> cars = new ArrayList<Car>();
	private int maximum = 10;

	/**
	 * Verifica se cabe mais um carro na carreta, se tiver espaço ele é colocado e
	 * retona verdadeiro, se a carreta estiver cheia retorna false.
	 * 
	 * @param car Carro que vai ser colocado na carreta.
	 * @return Boolean retorna se foi possivel ou não colocar o carro na carreta.
	 */
	public boolean addCar(Car car) {
		if (cars.size() < maximum) {
			cars.add(car);
			return true;
		}
		return false;
	}
	
	public int getTotalCars() {
		return cars.size();
	}
}
