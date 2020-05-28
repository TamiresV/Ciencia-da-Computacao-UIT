package laboratorio.computacao.paralela;

import java.awt.Color;
import java.awt.Component;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class Answer extends JFrame {

	Information information;
	ViewResult viewResult;

	public Answer(boolean status, Information information) {
		this.information = information;
		this.information.setWindows2(this);
		if(status==true)
		viewResult = new ViewResult("Registrado", information);
		else viewResult = new ViewResult("Erro no registro", information);
		this.information.setViewResult(viewResult);
		super.getContentPane().setBackground(Color.black);
		super.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		super.setSize(250, 100);
		super.setLocation(575, 300);
		start();

	}

	public void start() {
		super.add(viewResult);
		super.setVisible(true);
	}

}
