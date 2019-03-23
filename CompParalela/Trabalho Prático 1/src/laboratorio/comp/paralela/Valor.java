package laboratorio.comp.paralela;

import java.util.ArrayList;

public class Valor extends Thread {
	
	Information information;
	private int numRecebido;
	private int pos;
	private long numResposta = 1;

	public Valor(int numRecebido, int pos, Information information) {

		this.information = information;
		this.numRecebido = numRecebido;
		this.pos = pos;
	}

	public void run() {
		for (int i = 0; i < 4; i++) {
			numResposta = numResposta * numRecebido;
		}

		passaResultado(numResposta);
	}

	private void passaResultado(long resposta) {

		information.addExit(numResposta, pos);

	}

}
