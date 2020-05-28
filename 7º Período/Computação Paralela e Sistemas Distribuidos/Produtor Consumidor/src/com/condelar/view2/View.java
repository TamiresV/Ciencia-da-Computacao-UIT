package com.condelar.view2;

import java.awt.BorderLayout;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class View extends JPanel {

	JPanel l2 = new JPanel(new GridLayout(1, 2));
	JPanel l3 = new JPanel(new GridLayout(1, 5));
	JPanel l4 = new JPanel(new GridLayout(1, 5));

	JTextField qProdutor = new JTextField();
	JTextField qConsumidor = new JTextField();

	public View() {
		super(new GridLayout(6, 1));

		l2.add(new JLabel("Qtd de Produtores", JLabel.CENTER));

		l2.add(new JLabel("Qtd de Consumidores", JLabel.CENTER));

		l3.add(new JPanel());
		l3.add(qProdutor);
		l3.add(new JPanel());
		l3.add(qConsumidor);
		l3.add(new JPanel());

		super.add(new JPanel());
		super.add(l2);
		super.add(l3);
		super.add(new JPanel());

		l4.add(new JPanel());
		l4.add(new Executar(this));
		l4.add(new JPanel());
		super.add(l4);
		super.add(new JPanel());

	}
	
	public String getQProdutor() {
		return qProdutor.getText();
	}
	
	public String getQConsumidor() {
		return qConsumidor.getText();
	}

}
