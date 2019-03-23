package com.condelar.production;

import com.condelar.objcts.ComponentsType;
import com.condelar.objcts.Stock;

/**
 * Classe herdada de ProductionLine, onde define o tempo de produ��o, referencia
 * o estoque do tipo Banco.
 * 
 * @author Gilmar Resende, Tamires Vila�a, Victor Campos
 * @since 2019/03/17
 */
public class PLBank extends ProductionLine {
	/**
	 * Construtor da Linha de Produ��o de Banco.
	 */
	public PLBank() {
		productionTime = 6000;
		typeComponent = ComponentsType.Bank;
		setStock(new Stock(25));
	}
}
