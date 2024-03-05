package AdvJava.properties;

import java.util.Map;
import java.util.Properties;

public class Properties_one {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Properties data = new Properties();
        data.put("ML","Soham");
        data.put("Android Dev","Kartikey");
        data.put("Web Dev","Zakie");
        data.put("Designing","Akansha");
        data.put("UI/UX","Namaskruti");

        for (Map.Entry rec:data.entrySet()) {
            System.out.println(rec.getKey()+" : "+rec.getValue());
        }
    }
}
