package com.condelar.view2;

import javax.swing.JFrame;

public class Windows {

	private JFrame windows;
	private View view;

	public Windows() {
		windows = new JFrame();
		windows.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		windows.setSize(350, 250);
		windows.setLocation(200, 150);
		view = new View();

	}

	public void start() {
		windows.add(view);

		windows.setVisible(true);

	}
}
