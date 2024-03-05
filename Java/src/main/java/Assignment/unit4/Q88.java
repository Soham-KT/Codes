package Assignment.unit4;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class BoderLayoutDemo extends JFrame {
    BoderLayoutDemo()
    {
        JPanel pa = new JPanel();

        pa.setLayout(new BorderLayout());
        pa.add(new JButton("Welcome"), BorderLayout.NORTH);
        pa.add(new JButton("Kothari"), BorderLayout.SOUTH);
        pa.add(new JButton("Layout"), BorderLayout.EAST);
        pa.add(new JButton("Border"), BorderLayout.WEST);
        pa.add(new JButton("Soham"), BorderLayout.CENTER);
        add(pa);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 300);
        setVisible(true);
    }
}

class Q88 {
    public static void main(String[] args)
    {
        new BoderLayoutDemo();
    }
}
