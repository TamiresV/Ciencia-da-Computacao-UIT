package com.condelar.objcts;

import java.util.ArrayList;

import com.condelar.production.ProductionLine;

/**
 * Classe que sera herdada por estoque de todos os componentes.
 * 
 * @author Gilmar Resende, Tamires Vilaça, Victor Campos
 * @since 2019/03/17
 */
public class Stock {

	private ProductionLine productionLine;
	protected int maximumQuantity;
	protected ArrayList<Component> components = new ArrayList<Component>();

	public Stock(int quant) {
		this.maximumQuantity = quant;
	}

	/**
	 * Aumenta a quantidade de componentes em estoque.
	 */
	public void addComponent(Component component) {
		this.components.add(component);

	}

	/**
	 * Retorna o componete do estoque.
	 * 
	 * @return Componente;
	 */
	public Component useComponent() {

		Component tmp = this.components.get(0);
		this.components.remove(0);

		if (!productionLine.getStateB())
			synchronized (productionLine) {
				productionLine.setState(true);
				productionLine.notify();
			}

		return tmp;
	}

	/**
	 * Verifica se tem componente em estoque.
	 * 
	 * @return Boolean Retorna se ha componentes em estoque.
	 */
	public boolean inStock() {
		if (components.size() > 0)
			return true;
		return false;
	}

	/**
	 * Retorna a quantidade Máxima de componentes que o estoque pode ter.
	 * 
	 * @return maximumQuantity
	 */
	public int getMaximumQuantity() {
		return maximumQuantity;
	}

	/**
	 * Retorna a quantidade de componetes que o estoque pode ter.
	 * 
	 * @return componentis.size()
	 */
	public int getComponentsQuantity() {
		return components.size();
	}

	public void setThread(ProductionLine pl) {
		this.productionLine = pl;
	}
}
