package com.condelar.view.jframeCliente;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.GridLayout;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

import com.condelar.connexCliente.Send;

public class Windows extends JFrame {

	private View view;
	private JScrollPane barra;
	JPanel quadro = new JPanel(new BorderLayout());
	Interaction inte;
	Send send;
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	public Windows(Send send) {
		super.getContentPane().setBackground(Color.black);
		super.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		super.setSize(300, 200);
		super.setLocation(550, 250);
		this.send = send;
		inte = new Interaction(this);
		
		view = new View();
		
		
		view.setSize(300,500);
		barra = new JScrollPane(view);
		
		quadro.add(barra);
		
		quadro.add(inte, BorderLayout.SOUTH);
		//quadro.add(inte);
		super.add(quadro);
		
	}

	public void start() {
		super.setVisible(true);
	}
	
	public void windowsUpdate(String msg) {
		view.addJLabel(msg);
		super.setVisible(true);
	}
	
	public Send getSend() {
		return this.send;
	}
}
