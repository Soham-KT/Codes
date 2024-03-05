package AdvJava.properties;

import java.util.Iterator;
import java.util.Map;
import java.util.Properties;

public class Properties_Iterator {
    public static void main(String[] args) {
        System.out.println("Soham Kothari");
        Properties student = new Properties();
        student.put("Soham","ML");
        student.put("Kartikey","Android Dev");
        student.put("Zakie","Python");
        student.put("Akansha","UI/UX");
        student.put("Namaskruti","Data Sci");
        student.put("Tanishq","Full Stack");

        Iterator itr = student.entrySet().iterator();

        while (itr.hasNext()){
            Map.Entry rec = (Map.Entry) itr.next();
            System.out.println(rec.getKey()+" => "+rec.getValue());
        }
    }
}
