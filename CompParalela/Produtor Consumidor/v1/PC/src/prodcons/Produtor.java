package prodcons;

public class Produtor implements Runnable {
	
	Cesta cesta;
	int tamanhoCesta;
	
	Produtor (Cesta cesta,int tamanhoCesta)
	{
		this.cesta=cesta;
		this.tamanhoCesta=tamanhoCesta;
	}
	@Override
	public void run() {
		while(true)
		{
			synchronized (this) 
			{
				try {
					wait();//tenta guardar se ocupado
				}catch (InterruptedException e) {
					e.printStackTrace();
				}
				while(cesta.get()>=0&&cesta.get()<=(tamanhoCesta-1))
				{
					cesta.put(cesta.get()+1);//adiciona produtos na cesta
					System.out.println("Produzindo: "+cesta.get());
				}
			}
		}
	}
	public void init()
	{
		new Thread(this,"Produtor").start();
	}
	
}
