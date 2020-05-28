package laboratorio.comp.paralela;

import java.awt.GridLayout;

import javax.swing.JLabel;
import javax.swing.JPanel;

public class Result extends JPanel {

	public Result(int n, long r) {
		super.setLayout(new GridLayout(2, 1));

		JPanel data = new JPanel(new GridLayout(1, 2));

		data.add(new JLabel(" Valor de Entrada: " + n));

		data.add(new JLabel(" Resultado: " + r));
		this.add(data);

		JPanel line = new JPanel(new GridLayout(1, 3));
		line.add(new JLabel("------------------------------------------------------------------"));
		this.add(line);

	}

}
