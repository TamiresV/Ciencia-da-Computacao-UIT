package laboratorio.comp.paralela;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;

public class ButtonAddNumber extends JButton implements ActionListener { // Botão de quantidade

	Information information;
	int control = 0;

	public ButtonAddNumber(Information i) {
		super("Adicionar");
		super.setSize(60, 40);
		information = i;

		this.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {

		control++;

		String s = information.getScreenAddNumber().getBox();

		int n = Integer.parseInt(s);

		information.addNumber(n);
		information.getScreenAddNumber().input.setText("");

		if (control == information.getNumberOfNumbers() - 1) {
			super.setText("Calcular");
		}

		else if (control == information.getNumberOfNumbers()) {
			information.getScreenAddNumber().setVisible(false);
			information.getWindows().calculation();
		}

	}

}
