package Bolas;


import java.awt.Color;
import javax.swing.JPanel;

public class RunnableBall extends Ball implements Runnable
{  public RunnableBall(JPanel b, Color c) { super(b,c); }
   public void run()
   {  try
      {  draw();
         for (int i = 1; i <= 1000; i++)
         {  move();
            Thread.sleep(20);
         }
      }
      catch(InterruptedException e) {}
   }
}

