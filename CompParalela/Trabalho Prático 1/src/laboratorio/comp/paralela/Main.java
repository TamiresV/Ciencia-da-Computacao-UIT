package laboratorio.comp.paralela;

import javax.swing.JFrame;

public class Main {

	/**
	 * 
	 * Trabalho Pr�tico 1
	 *	�
	 *	Fa�a uma aplica��o em Java utilizando interface gr�fica utilizando
	 *	alguns dos conceitos apresentados em laborat�rio utilizando Threads:
	 *	�
	 *	A aplica��o dever� realizar alguma tarefa que necessite de threads e
	 *	que possa ser controlada pelo usu�rio
	 * @param args
	 */
	public static void main(String[] args) {

		Windows w = new Windows();
		w.start();

	}

}