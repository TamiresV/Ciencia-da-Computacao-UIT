package com.condelar.view2;

import java.awt.Color;
import java.awt.GridLayout;

import javax.swing.BorderFactory;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.border.Border;

import com.condelar.production.PLCar;

public class View extends JPanel {

	static View v;

	PLCar pl;

	JLabel l1 = new JLabel("Estoque", JLabel.CENTER);
	JPanel l2 = new JPanel(new GridLayout(1, 5));
	JPanel l3 = new JPanel(new GridLayout(1, 5));

	JLabel l4 = new JLabel("Estado da Linha de Produção", JLabel.CENTER);
	JPanel l5 = new JPanel(new GridLayout(1, 5));
	JPanel l6 = new JPanel(new GridLayout(1, 5));

	JPanel l7 = new JPanel(new GridLayout(1, 4));
	JPanel l8 = new JPanel(new GridLayout(1, 4));

	JLabel banco = new JLabel("", JLabel.CENTER);
	JLabel carroceria = new JLabel("", JLabel.CENTER);
	JLabel eletronico = new JLabel("", JLabel.CENTER);
	JLabel motor = new JLabel("", JLabel.CENTER);
	JLabel pneu = new JLabel("", JLabel.CENTER);

	String bancoS;
	String carroceriaS;
	String eletronicoS;
	String motorS;
	String pneuS;

	JLabel bancoP = new JLabel("", JLabel.CENTER);
	JLabel carroceriaP = new JLabel("", JLabel.CENTER);
	JLabel eletronicoP = new JLabel("", JLabel.CENTER);
	JLabel motorP = new JLabel("", JLabel.CENTER);
	JLabel pneuP = new JLabel("", JLabel.CENTER);

	String bancoPS;
	String carroceriaPS;
	String eletronicoPS;
	String motorPS;
	String pneuPS;

	JLabel tCarros = new JLabel("", JLabel.CENTER);
	JLabel tCarretas = new JLabel("", JLabel.CENTER);
	JLabel carrosNaCarreta = new JLabel("", JLabel.CENTER);
	JLabel tempoMedio = new JLabel("", JLabel.CENTER);;

	String nCarros;
	String nCarretas;
	String nCC;
	String tempo;

	JPanel p1 = new JPanel(new GridLayout(3, 1));
	JPanel p2 = new JPanel(new GridLayout(3, 1));
	JPanel p3 = new JPanel(new GridLayout(2, 1));

	private View(PLCar pl) {

		super(new GridLayout(3, 1));
		this.pl = pl;

		p1.setBorder(BorderFactory.createLineBorder(Color.black));
		l1.setBorder(BorderFactory.createLineBorder(Color.gray));
		p1.add(l1);
		montarL2();
		l2.setBorder(BorderFactory.createLineBorder(Color.gray));
		p1.add(l2);
		montarL3();
		l3.setBorder(BorderFactory.createLineBorder(Color.gray));
		p1.add(l3);
		super.add(p1);

		p2.setBorder(BorderFactory.createLineBorder(Color.black));
		l4.setBorder(BorderFactory.createLineBorder(Color.gray));
		p2.add(l4);
		montarL5();
		l5.setBorder(BorderFactory.createLineBorder(Color.gray));
		p2.add(l5);
		montarL6();
		l6.setBorder(BorderFactory.createLineBorder(Color.gray));
		p2.add(l6);
		super.add(p2);

		p3.setBorder(BorderFactory.createLineBorder(Color.black));
		montarL7();
		l7.setBorder(BorderFactory.createLineBorder(Color.gray));
		p3.add(l7);
		montarL8();
		l8.setBorder(BorderFactory.createLineBorder(Color.gray));
		p3.add(l8);
		super.add(p3);
	}

	public static View getView(PLCar pl) {
		if (v == null) {
			return new View(pl);
		}
		return v;

	}

	private void montarL2() {
		JLabel l = new JLabel("Banco", JLabel.CENTER);

		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l2.add(l);
		l = new JLabel("Carroceria", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l2.add(l);
		l = new JLabel("Eletronicos", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l2.add(l);
		l = new JLabel("Motor", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l2.add(l);
		l = new JLabel("Pneu", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l2.add(l);

	}

	private void montarL3() {

		banco.setBorder(BorderFactory.createLineBorder(Color.gray));
		l3.add(banco);
		carroceria.setBorder(BorderFactory.createLineBorder(Color.gray));
		l3.add(carroceria);
		eletronico.setBorder(BorderFactory.createLineBorder(Color.gray));
		l3.add(eletronico);
		motor.setBorder(BorderFactory.createLineBorder(Color.gray));
		l3.add(motor);
		pneu.setBorder(BorderFactory.createLineBorder(Color.gray));
		l3.add(pneu);
		update1();
	}

	public void update1() {
		ler1();
		banco.setText(bancoS);
		carroceria.setText(carroceriaS);
		eletronico.setText(eletronicoS);
		motor.setText(motorS);
		pneu.setText(pneuS);

	}

	private void ler1() {
		bancoS = pl.getPlBank().getStock().getComponentsQuantity() + "";
		carroceriaS = pl.getPlBodwork().getStock().getComponentsQuantity() + "";
		eletronicoS = pl.getPlElectronics().getStock().getComponentsQuantity() + "";
		motorS = pl.getPlMotor().getStock().getComponentsQuantity() + "";
		pneuS = pl.getPlTire().getStock().getComponentsQuantity() + "";
	}

	private void montarL5() {

		JLabel l = new JLabel("Banco", JLabel.CENTER);

		l = new JLabel("Banco", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l5.add(l);
		l = new JLabel("Carroceria", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l5.add(l);
		l = new JLabel("Eletronicos", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l5.add(l);
		l = new JLabel("Motor", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l5.add(l);
		l = new JLabel("Pneu", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l5.add(l);
	}

	private void montarL6() {

		l6.add(bancoP);
		bancoP.setBorder(BorderFactory.createLineBorder(Color.gray));
		l6.add(carroceriaP);
		carroceriaP.setBorder(BorderFactory.createLineBorder(Color.gray));
		l6.add(eletronicoP);
		eletronicoP.setBorder(BorderFactory.createLineBorder(Color.gray));
		l6.add(motorP);
		motorP.setBorder(BorderFactory.createLineBorder(Color.gray));
		l6.add(pneuP);
		pneuP.setBorder(BorderFactory.createLineBorder(Color.gray));
		update2();
	}

	public void update2() {
		ler2();
		bancoP.setOpaque(true);
		if (bancoPS.contentEquals("Ativa"))
			bancoP.setBackground(Color.green);
		else
			bancoP.setBackground(Color.RED);
		bancoP.setText(bancoPS);
		carroceriaP.setOpaque(true);
		if (carroceriaPS.contentEquals("Ativa"))
			carroceriaP.setBackground(Color.GREEN);
		else
			carroceriaP.setBackground(Color.RED);
		carroceriaP.setText(carroceriaPS);
		eletronicoP.setOpaque(true);
		if (eletronicoPS.contentEquals("Ativa"))
			eletronicoP.setBackground(Color.GREEN);
		else
			eletronicoP.setBackground(Color.RED);
		eletronicoP.setText(eletronicoPS);
		motorP.setOpaque(true);
		if (motorPS.contentEquals("Ativa"))
			motorP.setBackground(Color.GREEN);
		else
			motorP.setBackground(Color.RED);
		motorP.setText(motorPS);
		pneuP.setOpaque(true);
		if (pneuPS.contentEquals("Ativa"))
			pneuP.setBackground(Color.GREEN);
		else
			pneuP.setBackground(Color.RED);
		pneuP.setText(pneuPS);

	}

	private void ler2() {
		bancoPS = pl.getPlBank().getStateToString();
		carroceriaPS = pl.getPlBodwork().getStateToString();
		eletronicoPS = pl.getPlElectronics().getStateToString();
		motorPS = pl.getPlMotor().getStateToString();
		pneuPS = pl.getPlTire().getStateToString();
	}

	private void montarL7() {

		JLabel l = new JLabel("Quantidade Total de Carros", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l7.add(l);
		l = new JLabel("Quantidade de Carros na Carreta");
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l7.add(l);
		l = new JLabel("Quantidade de Carretas", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l7.add(l);
		l = new JLabel("Tempo Medio", JLabel.CENTER);
		l.setBorder(BorderFactory.createLineBorder(Color.gray));
		l7.add(l);

	}

	private void montarL8() {
		tCarros.setBorder(BorderFactory.createLineBorder(Color.gray));
		l8.add(tCarros);
		carrosNaCarreta.setBorder(BorderFactory.createLineBorder(Color.gray));
		l8.add(carrosNaCarreta);
		tCarretas.setBorder(BorderFactory.createLineBorder(Color.gray));
		l8.add(tCarretas);
		tempoMedio.setBorder(BorderFactory.createLineBorder(Color.gray));
		l8.add(tempoMedio);
		update3();
	}

	public void update3() {
		ler3();
		tCarros.setText(nCarros);
		carrosNaCarreta.setText(nCC);
		tCarretas.setText(nCarretas);
		tempoMedio.setText(tempo);
	}

	private void ler3() {
		nCarros = pl.getTotalOfCar() + "";
		nCC = pl.getTotalInCart() + "";
		nCarretas = pl.getTotalCats() + "";
		tempo = pl.getTempo() + "";
	}

}
