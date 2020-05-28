package com.condelar.production;

import com.condelar.objcts.ComponentsType;
import com.condelar.objcts.Stock;

/**
 * Classe herdada de ProductionLine, onde define o tempo de produ��o, referencia
 * o estoque do tipo de Carroceria.
 * 
 * @author Gilmar Resende, Tamires Vila�a, Victor Campos
 * @since 2019/03/17
 */
public class PLBodwork extends ProductionLine {
	/**
	 * Construtor da Linha de Produ��o de Carroceria.
	 */
	public PLBodwork() {
		productionTime = 15000;
		typeComponent = ComponentsType.Bodwork;
		setStock(new Stock(20));
	}

}
