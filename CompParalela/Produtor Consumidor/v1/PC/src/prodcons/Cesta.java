package prodcons;

public class Cesta {
	int n = 0;
	synchronized int get() 
	{// retorna a quantidade na cesta
		return 	n;
	}
	synchronized int put(int n) 
	{// adiciona produtos à cesta
		this.n = n;
		return this.n;
	}
}
