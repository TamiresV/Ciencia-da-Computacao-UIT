package com.condelar.objcts;

/**
 * Classe que representa os componentes do carro.
 * 
 * @author Gilmar Resende, Tamires Vilaça, Victor Campos
 * @since 2019/03/17
 */
public class Component {
	private ComponentsType type;
	/**
	 * No contrutor é definido qual tipo de componente que vai ser criado.
	 * @param type
	 */
	public Component(ComponentsType type) {
		this.type = type;
	}
	
	/**
	 * Retorna a descrição do componente.
	 * @return type
	 */
	public ComponentsType getType() {
		return this.type;
	}
	
}
