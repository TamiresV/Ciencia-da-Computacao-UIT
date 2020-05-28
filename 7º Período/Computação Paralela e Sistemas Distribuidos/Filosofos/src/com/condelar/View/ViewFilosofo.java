package com.condelar.View;

import java.awt.Color;
import java.awt.GridLayout;

import javax.swing.JLabel;
import javax.swing.JPanel;

public class ViewFilosofo extends JPanel {

	private int number;

	private JLabel acaoF = new JLabel("");

	public ViewFilosofo(int n) {
		super(new GridLayout(3, 2));

		super.add(new JLabel("Filosofo"));
		super.add(new JLabel(n + ""));
		super.add(new JLabel("Ação"));
		super.add(acaoF);
		super.setBackground(Color.gray);

		this.number = n;

	}

	public JLabel getAcaoF() {
		return acaoF;

	}

	public void setAcaoF(String string) {
		this.acaoF.setText(string);
		setColor();
	}

	public void setColor() {

		if (acaoF.getText().contentEquals("Pensando")) {
			super.setBackground(Color.blue);
		}

		else if (acaoF.getText().contentEquals("Comendo")) {
			super.setBackground(Color.green);
		}

		else if (acaoF.getText().contentEquals("Com Fome")) {
			super.setBackground(Color.red);
		}

	}

	public int getNumber() {
		return number;
	}

}
