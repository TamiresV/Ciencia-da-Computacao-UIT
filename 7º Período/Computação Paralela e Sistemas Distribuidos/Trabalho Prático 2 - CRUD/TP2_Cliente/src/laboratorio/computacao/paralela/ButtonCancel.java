package laboratorio.computacao.paralela;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;

public class ButtonCancel extends JButton implements ActionListener {

	public ButtonCancel() {
		super("Sair");

		this.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {

		System.exit(0);
	}

}
