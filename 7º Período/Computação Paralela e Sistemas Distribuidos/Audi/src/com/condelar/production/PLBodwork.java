package com.condelar.production;

import com.condelar.objcts.ComponentsType;
import com.condelar.objcts.Stock;

/**
 * Classe herdada de ProductionLine, onde define o tempo de produção, referencia
 * o estoque do tipo de Carroceria.
 * 
 * @author Gilmar Resende, Tamires Vilaça, Victor Campos
 * @since 2019/03/17
 */
public class PLBodwork extends ProductionLine {
	/**
	 * Construtor da Linha de Produção de Carroceria.
	 */
	public PLBodwork() {
		productionTime = 15000;
		typeComponent = ComponentsType.Bodwork;
		setStock(new Stock(20));
	}

}
