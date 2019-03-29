package prodcons;

public class Consumidor implements Runnable {
	Cesta cesta;
	public Consumidor(Cesta cesta)
	{
		this.cesta=cesta;
	}
	@Override
	public void run() {
		while(true)
		{
			synchronized (this) {
				try {
					wait();//tenta aguardar se ocupado
				}catch (InterruptedException e) {
					// TODO: handle exception
				}while(cesta.get()!=0)
				{
					System.out.println("Consumindo: "+cesta.get());
					cesta.put(cesta.get()-1);//tira produto da cesta
				}
			}
		}
	}
	public void init()
	{
		new Thread(this,"Consumidor").start();
	}
}
