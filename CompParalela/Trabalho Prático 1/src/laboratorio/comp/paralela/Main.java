package laboratorio.comp.paralela;

import javax.swing.JFrame;

public class Main {

	/**
	 * 
	 * Trabalho Prático 1
	 *	•
	 *	Faça uma aplicação em Java utilizando interface gráfica utilizando
	 *	alguns dos conceitos apresentados em laboratório utilizando Threads:
	 *	•
	 *	A aplicação deverá realizar alguma tarefa que necessite de threads e
	 *	que possa ser controlada pelo usuário
	 * @param args
	 */
	public static void main(String[] args) {

		Windows w = new Windows();
		w.start();

	}

}