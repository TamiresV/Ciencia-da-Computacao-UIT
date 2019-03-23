package com.condelar.objcts;

/**
 * Classe que representa os componentes do carro.
 * 
 * @author Gilmar Resende, Tamires Vila�a, Victor Campos
 * @since 2019/03/17
 */
public class Component {
	private ComponentsType type;
	/**
	 * No contrutor � definido qual tipo de componente que vai ser criado.
	 * @param type
	 */
	public Component(ComponentsType type) {
		this.type = type;
	}
	
	/**
	 * Retorna a descri��o do componente.
	 * @return type
	 */
	public ComponentsType getType() {
		return this.type;
	}
	
}
