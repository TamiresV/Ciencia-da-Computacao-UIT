package com.condelar.View;

import java.awt.GridLayout;
import java.util.ArrayList;

import javax.swing.JPanel;

public class View extends JPanel {

	ArrayList<ViewFilosofo> listaFilosofo = new ArrayList<ViewFilosofo>();
	ArrayList<ViewGarfo> listaGarfo = new ArrayList<ViewGarfo>();

	public View() {
		super(new GridLayout(4, 4));
		montar();
	}

	public void montar() {
		super.add(new JPanel());

		// adicionar filosofo
		ViewFilosofo f0 = new ViewFilosofo(0);
		listaFilosofo.add(f0);
		super.add(f0);

		// adicionar garfo
		ViewGarfo g0 = new ViewGarfo();
		listaGarfo.add(g0);
		super.add(g0);

		super.add(new JPanel());

		// adicionar garfo

		ViewGarfo g1 = new ViewGarfo();
		listaGarfo.add(g1);
		super.add(g1);

		super.add(new JPanel());
		super.add(new JPanel());

		// adicionar filosofo
		ViewFilosofo f1 = new ViewFilosofo(1);
		listaFilosofo.add(f1);
		super.add(f1);

		// adicionar filosofo
		ViewFilosofo f2 = new ViewFilosofo(2);
		listaFilosofo.add(f2);
		super.add(f2);

		super.add(new JPanel());
		super.add(new JPanel());
		
		//adicionar dois garfo

		ViewGarfo g2 = new ViewGarfo();
		listaGarfo.add(g2);
		super.add(g2);
		

		ViewGarfo g3 = new ViewGarfo();
		listaGarfo.add(g3);
		super.add(g3);
		
		// adicionar filosofo
		ViewFilosofo f3 = new ViewFilosofo(3);
		listaFilosofo.add(f3);
		super.add(f3);
		
		//adicionar garfo

		ViewGarfo g4 = new ViewGarfo();
		listaGarfo.add(g4);
		super.add(g4);
		
		// adicionar filosofo
		ViewFilosofo f4 = new ViewFilosofo(4);
		listaFilosofo.add(f4);
		super.add(f4);


	}

	public ViewFilosofo getFilosofo(int n) {
		return listaFilosofo.get(n);
	}
	
	public ViewGarfo getGarfo(int n) {
		return listaGarfo.get(n);
	}
	

}
