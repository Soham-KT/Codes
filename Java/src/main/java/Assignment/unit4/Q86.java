package Assignment.unit4;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class Q86 extends Frame {
    JFrame f;
    Q86(){
        f = new JFrame("ComboBox Example");
        final JLabel label = new JLabel();
        label.setText("Hello there");
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setSize(400,100);

        JButton b=new JButton("Show");
        b.setBounds(200,100,75,20);

        String cls[] = {"red", "blue", "cyan", "green", "gray"};
        final JComboBox cb=new JComboBox(cls);
        cb.setBounds(50, 100,90,20);
        f.add(cb); f.add(label); f.add(b);
        f.setLayout(null);
        f.setSize(350,350);
        f.setVisible(true);

        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                Object itemAt = cb.getItemAt(cb.getSelectedIndex());

                if (itemAt.equals("red")) {
                    label.setForeground(Color.red);
                }
                else if (itemAt.equals("blue")) {
                    label.setForeground(Color.blue);
                }
                else if (itemAt.equals("cyan")) {
                    label.setForeground(Color.cyan);
                }
                else if (itemAt.equals("green")) {
                    label.setForeground(Color.green);
                }
                else if (itemAt.equals("gray")) {
                    label.setForeground(Color.gray);
                }
                else {
                    label.setForeground(Color.white);
                }
            }
        });
    }

    public static void main(String[] args) {
        Q86 q = new Q86();
    }
}
