package Bolas;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class BounceBall
{  public static void main(String[] args)
   {  JFrame frame = new BounceFrame();
      frame.setVisible(true);
   }
}

class BounceFrame extends JFrame
{  public BounceFrame()
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
            {  Ball b = new Ball(canvas,Color.red);
               b.bounce();
            }
         });

      addButton(p, "Close",
         new ActionListener()
         {  public void actionPerformed(ActionEvent evt)
            {  System.exit(0);
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


