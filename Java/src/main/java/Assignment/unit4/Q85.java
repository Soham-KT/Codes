package Assignment.unit4;

import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Rectangle2D;

public class Q85 extends Frame {
    Q85(){
        this.setVisible(true);
        this.setSize(500, 500);
        this.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
        this.setTitle("Q) 85");
    }

    public void paint(Graphics g){
        Shape circle = new Ellipse2D.Float(200.0f, 200.0f, 100.0f, 100.0f);
        Shape rect = new Rectangle2D.Float(100.0f, 200.0f, 300.0f, 100.0f);
        Graphics2D ga = (Graphics2D) g;
        ga.draw(rect);
        ga.setPaint(Color.red);
        ga.fill(rect);
        ga.draw(circle);
        ga.setPaint(Color.green);
        ga.fill(circle);
    }

    public static void main(String[] args) {
        Q85 q = new Q85();
    }
}