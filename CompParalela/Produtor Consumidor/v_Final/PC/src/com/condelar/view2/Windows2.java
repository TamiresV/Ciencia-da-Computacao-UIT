package com.condelar.view2;

import javax.swing.JFrame;

import com.condelar.obj.Controle;

public class Windows2 extends Thread {

	private JFrame windows;
	private Execucao view;
	
	int p,c;

	public Windows2(int qP, int qC) {
		p=qP;
		c=qC;
		
		windows = new JFrame();
		windows.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		windows.setSize(320, 240);
		windows.setLocation(200, 150);
		

	}

	public void run() {
		
		Controle con = new Controle(p, c);
		con.producao();
		view = new Execucao(p,c,con);
		
		windows.add(view);
		while (true) {
			view.update();
			windows.setVisible(true);

		}

	}
}
