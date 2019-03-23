package laboratorio.comp.paralela;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

import javax.swing.JButton;
import javax.swing.JFrame;

public class QuantityButton extends JButton implements ActionListener { // Botão de quantidade

	Information information;

	public QuantityButton(Information i) {
		super("OK");

		information = i;

		this.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {

		String s = information.getScreenDefiniQuantityOfNumber().getBox();

		int n = Integer.parseInt(s);

		information.setNumberOfNumbers(n);
		
		information.getScreenDefiniQuantityOfNumber().setVisible(false);

		information.getWindows().inputNumbers();

	}

}
