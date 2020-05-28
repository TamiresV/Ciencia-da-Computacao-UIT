package com.condelar.production;

import java.util.Calendar;

import com.condelar.objcts.Component;
import com.condelar.objcts.ComponentsType;
import com.condelar.objcts.Stock;

/**
 * Classe que sera herdada pelas linhas de produção.
 * 
 * @author Gilmar Resende, Tamires Vilaça, Victor Campos
 * @since 2019/03/17
 */
public abstract class ProductionLine extends Thread {

	protected int productionTime;
	private Stock stock;
	public ComponentsType typeComponent;
	private boolean state = true;

	/**
	 * Excução da thrad, Verifica se o estoque pode receber mais componentes, se não
	 * poder ele para a tread ate que possa recebernovamente.
	 */
	public void run() {
		while (true) {

			if (state) {

				this.makeComponent();
				if (stock.getComponentsQuantity() == stock.getMaximumQuantity()) {
					synchronized (this) {
						state = false;
						try {
							wait();
						} catch (InterruptedException e) {
							// TODO Auto-generated catch block
							e.printStackTrace();
						}
					}

				}
			}

		}

	}

	private synchronized void makeComponent() {

		try {
			sleep(productionTime);

		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		stock.addComponent(new Component(typeComponent));

	}

	/**
	 * Retoruna o estoque.
	 * 
	 * @return Estoque de componetes.
	 */
	public Stock getStock() {
		return this.stock;
	}

	public String getStateToString() {
		if (state)
			return "Ativa";
		return "Desativada";
	}

	protected void setStock(Stock stock) {
		this.stock = stock;
		this.stock.setThread(this);
	}

	public boolean getStateB() {
		return state;
	}

	public void setState(boolean b) {
		this.state = b;
	}

}
