package com.condelar.view.jframeCliente;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JTextField;

import com.condelar.connexCliente.Send;

public class ButtonSend extends JButton implements ActionListener { // Botão de quantidade
	private JTextField box;
	private Windows w;

	public ButtonSend(JTextField box, Windows w) {
		super("Enviar");
		super.setSize(60, 40);
		this.w = w;
		this.box = box;

		this.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		String str = box.getText();
		box.setText("");
		w.getSend().run(str);

	}

}
