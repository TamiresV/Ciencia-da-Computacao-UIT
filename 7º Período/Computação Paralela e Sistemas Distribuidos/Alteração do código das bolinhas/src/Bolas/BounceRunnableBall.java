package Bolas;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class BounceRunnableBall
{  
}

class BounceThreadFrame extends JFrame
{  public BounceThreadFrame(int quantity)
   {  setSize(300, 200);
      setTitle("Bounce");

      addWindowListener(new WindowAdapter()
         {  public void windowClosing(WindowEvent e)
            {  System.exit(0);
            }
         } );

      Container contentPane = getContentPane();
      canvas = new JPanel();
      contentPane.add(canvas, "Center");
      JPanel p = new JPanel();
      addButton(p, "Start",
         new ActionListener()
         {  public void actionPerformed(ActionEvent evt)
            {  
        	 for(int i = 0 ; i < quantity ; i++)
        	 {
        	   Thread b = new Thread(new RunnableBall(canvas,Color.blue));
               b.start();
               System.out.println(b);
        	 }
        	}
         });

      addButton(p, "Close",
         new ActionListener()
         {  public void actionPerformed(ActionEvent evt)
            {  canvas.setVisible(false);
               System.exit(0);
            }
         });
      contentPane.add(p, "South");
   }

   public void addButton(Container c, String title,
      ActionListener a)
   {  JButton b = new JButton(title);
      c.add(b);
      b.addActionListener(a);
   }

   private JPanel canvas;
}



