package Bolas;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

import javax.swing.JFrame;

public class Control {
	public static void main(String[] args) throws IOException
	   {  
		 int quantity = setQuantity();

		JFrame frame = new BounceThreadFrame(quantity);
	    frame.setVisible(true);
	   }
	
	private static int setQuantity() throws IOException
	{		
		InputStreamReader stream = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(stream);
		
		int value = Integer.parseInt(br.readLine());
		return value;
	}
}
