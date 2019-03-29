package Bolas;

import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class BounceSelfishBall
{  public static void main(String[] args)
   {  JFrame frame = new BounceSelfishFrame();
      frame.setVisible(true);
   }
}

class BounceSelfishFrame extends JFrame
{  public BounceSelfishFrame()
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
            {  Thread b = new Thread(new RunnableBall(canvas,Color.blue));
               b.start();
            }
         });

      addButton(p, "Selfish",
         new ActionListener()
         {  public void actionPerformed(ActionEvent evt)
            {  Thread b = new Thread(new SelfishBall(canvas, Color.red));
               b.setPriority(10);
               b.start();
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

class SelfishBall extends RunnableBall
{  public SelfishBall(JPanel b, Color c) { super(b,c); }

   public void run()
   {  draw();
      for (int i = 1; i <= 1000; i++)
      {  move();
         long t = System.currentTimeMillis();
         while (System.currentTimeMillis() < t + 5)
            ;
      }
   }
}

