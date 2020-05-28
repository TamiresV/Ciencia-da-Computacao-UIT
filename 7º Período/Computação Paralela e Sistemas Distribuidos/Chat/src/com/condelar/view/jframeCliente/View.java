package com.condelar.view.jframeCliente;

import javax.swing.BoxLayout;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class View extends JPanel {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	public View() {
		super();
		setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));

	}

	public void addJLabel(String msg) {

		JLabel mensagem = new JLabel(msg);
		
		super.add(mensagem);
	}

}
