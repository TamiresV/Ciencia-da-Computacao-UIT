package com.condelar.view.jframeCliente;

import java.awt.BorderLayout;
import java.awt.Event;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.JTextField;

import com.condelar.connexCliente.Send;

public class Interaction extends JPanel{
	
	private JTextField box = new JTextField();
	private ButtonSend botao;
	
	
	public Interaction(Windows w) {
		super(new BorderLayout());
		
		box.addKeyListener(new KeyAdapter() {
			@Override
			public void keyPressed(KeyEvent e) {
				if (e.getKeyCode() == Event.ENTER) {
					String str = box.getText();
					box.setText("");
					w.getSend().run(str);
				}
			}
		});
		
		
		botao = new ButtonSend(box,w);	
		super.add(box);
		
		super.add(botao,BorderLayout.EAST);
	}
	/*
	public String getText() {
		String txt = box.getText();
		box.setText("");
		return txt;
	}*/

}
