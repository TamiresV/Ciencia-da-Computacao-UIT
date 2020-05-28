package com.condelar.View;

import java.awt.Color;

import javax.swing.JFrame;
import javax.swing.JScrollPane;



public class Windows extends JFrame{
	
	private View view;
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	public Windows() {
		super.getContentPane().setBackground(Color.black);
		super.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		super.setSize(700, 400);
		super.setLocation(550, 250);
		
		
		view = new View();
		
		
	}

	public void start() {
		
		super.add(view);
		super.setVisible(true);
	}
	
	public ViewFilosofo getFilosofo(int n) {
		return view.getFilosofo(n);
	}
	
	public ViewGarfo getGarfo(int n) {
		return view.getGarfo(n);
	}
	
	public View getView() {
		return this.view;
	}
	

}
