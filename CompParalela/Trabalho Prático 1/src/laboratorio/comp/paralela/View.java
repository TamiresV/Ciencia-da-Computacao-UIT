package laboratorio.comp.paralela;

import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class View extends JPanel {

	private JButton button;
	private Information information;

	public JTextField input = new JTextField();

	public View(Information i, JButton button, String name) {

		super(new GridLayout(5, 1));

		
		super.setToolTipText(name);
		this.information = i;
		this.button = button;
		this.assembly();

	}

	public void assembly() {
		JPanel line1 = new JPanel(new GridLayout(1, 1));
		super.add(line1);
		JPanel line2 = new JPanel(new GridLayout(1, 2));
		JPanel block1 = new JPanel(new GridLayout(1, 1));
		JPanel block2 = new JPanel(new GridLayout(1, 1));
		JPanel block3 = new JPanel(new GridLayout(1, 1));
		line2.add(block1);
		line2.add(block2);
		line2.add(block3);
		line2.add(input);
		JPanel block4 = new JPanel(new GridLayout(1, 1));
		JPanel block5 = new JPanel(new GridLayout(1, 1));
		JPanel block6 = new JPanel(new GridLayout(1, 1));
		line2.add(block4);
		line2.add(block5);
		line2.add(block6);
		super.add(line2);
		JPanel line3 = new JPanel(new GridLayout(1, 1));
		super.add(line3);
		JPanel line4 = new JPanel(new GridLayout(1, 5));
		JPanel block7 = new JPanel(new GridLayout(1, 1));
		line4.add(block7);
		line4.add(button);
		JPanel block8 = new JPanel(new GridLayout(1, 1));
		line4.add(block8);
		super.add(line4);
	}

	public String getBox() {
		return this.input.getText();
	}

}
