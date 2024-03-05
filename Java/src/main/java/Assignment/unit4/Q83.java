package Assignment.unit4;
import javax.swing.*;
import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class Q83 extends Frame {
    Q83(){
        this.setVisible(true);
        this.setSize(500, 500);
        this.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
        this.setTitle("Q) 82");
    }

    public void paint(Graphics g){
        // line perpendicular to each other
        g.drawLine(100, 500, 500, 500);
        g.drawLine(300, 500, 300, 100);

        // line parallel to each other
        g.drawLine(600, 100, 600, 300);
        g.drawLine(700, 100, 700, 300);
    }

    public static void main(String[] args) {
        Q83 q = new Q83();
    }
}