package laboratorio.computacao.paralela;

import java.awt.Color;

import javax.swing.JFrame;

public class Windows extends JFrame {

	Information information = new Information();
	ViewRegister viewRegister = new ViewRegister(information);

	public Windows() {
		information.setWindows(this);
		information.setViewRegister(viewRegister);
		super.getContentPane().setBackground(Color.black);
		super.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		super.setSize(300, 200);
		super.setLocation(550, 250);
	}

	public void start() {
		super.add(viewRegister);
		super.setVisible(true);
	}
}
