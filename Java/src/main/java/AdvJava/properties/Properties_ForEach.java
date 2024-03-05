package AdvJava.properties;

import java.util.Map;
import java.util.Properties;

public class Properties_ForEach {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Properties data = new Properties();
        data.put("ML","Soham kothari");
        data.put("Android Dev","Kartikey");
        data.put("Web Dev","Zakie");

        System.out.println(data);
    }
}
