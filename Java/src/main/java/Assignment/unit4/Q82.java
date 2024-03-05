package Assignment.unit4;
import javax.swing.*;
import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class Q82 extends Frame {
    Q82(){
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
        g.drawLine(100, 500, 500, 500);
    }

    public static void main(String[] args) {
        Q82 q = new Q82();
    }
}
