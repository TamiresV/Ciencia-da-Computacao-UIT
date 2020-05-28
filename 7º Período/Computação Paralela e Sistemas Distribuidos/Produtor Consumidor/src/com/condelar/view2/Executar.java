package com.condelar.view2;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;

import com.condelar.obj.Controle;

public class Executar extends JButton implements ActionListener { // Botão de quantidade

	private Execucao view;
	private View v;
	public Executar(View v) {
		super("Executar");
		this.v = v;
		this.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		String qP = v.getQProdutor();
		int p = Integer.parseInt(qP);
		
		String qC = v.getQConsumidor();
		int c = Integer.parseInt(qC);
		
		
		new Windows2(p,c).start();
		
		
	}
}
