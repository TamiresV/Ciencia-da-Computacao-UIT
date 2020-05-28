package com.condelar.View;

import java.awt.Color;
import java.awt.GridLayout;

import javax.swing.JLabel;
import javax.swing.JPanel;

public class ViewGarfo extends JPanel{
	
	private JLabel status = new JLabel("Disponivel");
	
	
	public ViewGarfo() {
		super(new GridLayout(1,2));
		super.add(new JLabel("Status"));
		super.add(status);
		super.setBackground(Color.CYAN);
	}
	
	public void setStatus(String str) {
		this.status.setText(str);
	}
	
	

}
