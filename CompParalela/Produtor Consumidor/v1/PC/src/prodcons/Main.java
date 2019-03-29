package prodcons;

public class Main {

	public static void main(String[] args) {
		new Runnable() {
			
			@Override
			public void run() {
				final int tamanhoCesta=100;//define tamanho da cesta
				Cesta cesta=new Cesta();
				Produtor p=new Produtor(cesta, tamanhoCesta);
				Consumidor c= new Consumidor(cesta);
				p.init();//executa produtor
				c.init();//executa consumidor
				
				while(true)
				{
					if(cesta.get()==0)
					{
						synchronized (p) {
							System.out.println("Produtor Iniciado");
							p.notify();
						}
					}
					if(cesta.get()==tamanhoCesta)
					{
						synchronized (c) {
							System.out.println("Consumidor Iniciado");
							c.notify();
						}
					}
				}
			}
		}.run();
	}

}
