package laboratorio.computacao.paralela;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.net.UnknownHostException;

public class ConectionClient {

	private int serverPort = 1234;
	private Data record;
	private Socket socket;
	ObjectOutputStream outPut;
	ObjectInputStream inPut;

	public ConectionClient(Data record) throws UnknownHostException, IOException {

		this.record = record;
		this.socket = new Socket("localhost", serverPort);

		// Objeto de envio sempre instaciado primeiro
		outPut = new ObjectOutputStream(socket.getOutputStream());// Objeto de envio de Dados

		inPut = new ObjectInputStream(socket.getInputStream());// Objeto de recebimento de Dados

	}

	public void submit() throws IOException {

		outPut.writeUTF(record.getName());
		outPut.flush();
		outPut.writeUTF(record.getPhone());
		outPut.flush();
		outPut.writeUTF(record.geteMail());
		outPut.flush();
		outPut.writeUTF(record.getPassword());
		outPut.flush();

	}

	public boolean receiver() throws IOException {
		boolean bool;
		bool = inPut.readBoolean();
		return bool;
	}

}
