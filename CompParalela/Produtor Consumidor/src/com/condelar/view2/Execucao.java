package com.condelar.view2;

import java.awt.Color;
import java.awt.Component;
import java.awt.GridLayout;

import javax.swing.BorderFactory;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.ImageIcon;

import com.condelar.obj.Controle;

public class Execucao extends JPanel {

	private static final long serialVersionUID = 1L;
	JPanel l1 = new JPanel(new GridLayout(2, 1));
	JPanel l2 = new JPanel(new GridLayout(2, 1));
	JPanel l3 = new JPanel(new GridLayout(1, 2));
	JPanel l3C1 = new JPanel(new GridLayout(2, 1));
	JLabel quantidade = new JLabel("aa", JLabel.CENTER);
	JLabel produtor = new JLabel("bb", JLabel.CENTER);
	JLabel consumidor = new JLabel("xx", JLabel.CENTER);
	JLabel produtorD = new JLabel("Produtor", JLabel.CENTER);
	JLabel consumidorD = new JLabel("Consumidor", JLabel.CENTER);
	JLabel quantidadeD = new JLabel("Quantidade", JLabel.CENTER);
	JLabel imagem = new JLabel();

	private Controle c;

	public Execucao(int qP, int qC, Controle c) {
		super(new GridLayout(2, 1));

		montar();
		this.c = c;
		
		
	}

	private void montar() {

		l1.add(produtorD);
		l1.add(produtor);
		l1.setBorder(BorderFactory.createLineBorder(Color.black));

		l2.add(consumidorD);
		l2.add(consumidor);
		l2.setBorder(BorderFactory.createLineBorder(Color.black));

		l3C1.add(quantidadeD);
		l3C1.add(quantidade);

		l3.add(l3C1);
		l3.setBorder(BorderFactory.createLineBorder(Color.black));
		l3.add(imagem);
		super.add(l1);
		super.add(l2);
		super.add(l3);
		super.add(imagem);

	}

	public void update() {
		boolean estado = c.getCesta().getProduzindo();
		
		produtor.setOpaque(true);
		produtorD.setOpaque(true);
		consumidor.setOpaque(true);
		consumidorD.setOpaque(true);
		if (estado) {
			produtorD.setBackground(Color.green);
			produtor.setBackground(Color.green);
			consumidor.setBackground(Color.red);
			consumidorD.setBackground(Color.red);
			produtor.setText(c.getCesta().getnP() + 1 + "");
			consumidor.setText("x");
		} else {
			consumidor.setBackground(Color.green);
			consumidorD.setBackground(Color.green);
			produtorD.setBackground(Color.red);
			produtor.setBackground(Color.red);
			consumidor.setText(c.getCesta().getnC() + 1 + "");
			produtor.setText("x");
		}

		int q = c.getCesta().getQtd();
		quantidade.setText(q + "");

		quantidade.setOpaque(true);
		quantidadeD.setOpaque(true);
		int qt = c.getCesta().getqMax();
		ImageIcon img = null;

		if (q < qt / 4) {
			quantidade.setBackground(Color.red);
			quantidadeD.setBackground(Color.red);
			img = new ImageIcon("res/1.jpg");
		} else if (q < qt / 2) {
			quantidade.setBackground(Color.yellow);
			quantidadeD.setBackground(Color.yellow);
			img = new ImageIcon("res/2.jpg");
		} else {
			quantidade.setBackground(Color.cyan);
			quantidadeD.setBackground(Color.cyan);
			img = new ImageIcon("res/3.jpg");
		}
		imagem.setIcon(img);

	}

}
