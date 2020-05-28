package Bolas;


import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Ball
{  public Ball(JPanel b, Color c) { box = b; color = c; }

   public void draw()
   {  Graphics g = box.getGraphics();
      g.setColor(color);
      g.fillOval(x, y, XSIZE, YSIZE);
      g.dispose();
   }

   public void move()
   {  Graphics g = box.getGraphics();
      g.setXORMode(box.getBackground());
      g.setColor(color);
      g.fillOval(x, y, XSIZE, YSIZE);
      x += dx;
      y += dy;
      Dimension d = box.getSize();
      if (x < 0)
      { x = 0; dx = -dx; }
      if (x + XSIZE >= d.width)
      { x = d.width - XSIZE; dx = -dx; }
      if (y < 0)
      { y = 0; dy = -dy; }
      if (y + YSIZE >= d.height)
      { y = d.height - YSIZE; dy = -dy; }
      g.fillOval(x, y, XSIZE, YSIZE);
      g.dispose();
   }

   public void bounce()
   {  draw();
      for (int i = 1; i <= 1000; i++)
      {  move();
         try { Thread.sleep(5); }
         catch(InterruptedException e) {}
      }
   }

   private JPanel box;
   private Color color;
   private static final int XSIZE = 10;
   private static final int YSIZE = 10;
   private int x = 0;
   private int y = 0;
   private int dx = 2;
   private int dy = 2;
}


