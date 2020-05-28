package laboratorio.comp.paralela;

import java.awt.Color;
import java.awt.GridLayout;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;

public class Windows {
	/*
	 * Ao parar o mouse aparece a mensagem na tela
	 */

	JFrame windows = new JFrame("Potência de 4");
	Information information = new Information(this);

	public Windows() {

		windows.getContentPane().setBackground(Color.gray);
		windows.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		windows.setSize(300, 200);
	}

	public void start() {

		QuantityButton button = new QuantityButton(information);
		View screen = new View(information, button, "Quantidade de numeros");
		information.setScreenDefiniQuantityOfNumber(screen);
		windows.setName("Potencia");
		windows.add(screen);
		windows.setVisible(true);

	}

	public void inputNumbers() {

		ButtonAddNumber button = new ButtonAddNumber(information);
		View screen = new View(information, button, "Adicionar Numeros");
		information.setScreenAddNumber(screen);

		windows.add(screen);

		screen.setVisible(true);

	}
	
	public void calculation() {
		Valor v;
		for (int i = 0; i < information.getNumbers().size(); i++) {
			v = new Valor(information.getNumbers().get(i).getInput(), i, information);
			information.addThread(v);
		}

		for (Valor vl : information.getThread()) {
			vl.start();
		}
		this.showResult();
	}
	
	

	public void showResult() {
		Result result;
		JPanel jp = new JPanel();
		jp.setLayout(new GridLayout(information.getNumberOfNumbers(), 1));
		for (Data d : information.getNumbers()) {
			System.out.println("entrada:" + d.getInput() + "\nsaida: " + d.getExit());
			result = new Result(d.getInput(),d.getExit());
			jp.add(result);

		}
		JScrollPane barra = new JScrollPane(jp);
		windows.add(barra);

		barra.setVisible(true);

	}

}