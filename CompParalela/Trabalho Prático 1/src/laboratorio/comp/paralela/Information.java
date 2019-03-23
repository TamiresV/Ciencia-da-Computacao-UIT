package laboratorio.comp.paralela;

import java.util.ArrayList;

import javax.swing.JFrame;

public class Information { // Informação

	private int numberOfNumbers; // quantidade de numeros
	private ArrayList<Data> numbers = new ArrayList<Data>(); // numeros
	private Windows windows;
	private View screenDefiniQuantityOfNumber;
	private View screenAddNumber;
	private ArrayList<Valor> thread = new ArrayList<Valor>();

	public void addThread(Valor v) {
		thread.add(v);
	}
	
	public ArrayList<Valor> getThread(){
		return this.thread;
	}
	
	public void addExit(long n, int p) {
		this.numbers.get(p).setExit(n);
	}

	public Information(Windows w) {
		windows = w;
	}

	public void addNumber(int n) {
		Data tmp = new Data(n);
		numbers.add(tmp);
	}

	public ArrayList<Data> getNumbers() {
		return this.numbers;
	}

	public void setNumberOfNumbers(int n) {
		this.numberOfNumbers = n;
	}

	public int getNumberOfNumbers() {
		return this.numberOfNumbers;
	}

	public Windows getWindows() {
		return this.windows;
	}

	public void setScreenDefiniQuantityOfNumber(View v) {
		this.screenDefiniQuantityOfNumber = v;
	}

	public View getScreenDefiniQuantityOfNumber() {
		return this.screenDefiniQuantityOfNumber;
	}

	public void setScreenAddNumber(View v) {
		this.screenAddNumber = v;
	}

	public View getScreenAddNumber() {
		return this.screenAddNumber;
	}
}
