package com.condelar.view2;

import javax.swing.JFrame;

import com.condelar.production.PLCar;

public class Windows extends Thread {

	private JFrame windows;
	private View view;
	private PLCar pLCar;

	public Windows() {
		windows = new JFrame();
		windows.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		windows.setSize(500, 500);
		windows.setLocation(450, 150);
		try {
			pLCar = new PLCar();
			pLCar.start();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		view = View.getView(pLCar);

	}

	public void run() {
		windows.add(view);
		while (true) {

			view.update1();
			view.update2();
			view.update3();
			windows.setVisible(true);

		}

	}
}
