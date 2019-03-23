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
public class PLMotor extends ProductionLine {
	/**
	 * Construtor da Linha de Produção de Eletronicos.
	 */
	public PLMotor() {
		productionTime = 7000;
		typeComponent = ComponentsType.Motor;
		setStock(new Stock(10));
	}
}
