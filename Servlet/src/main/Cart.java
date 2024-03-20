package main;

import java.util.ArrayList;
import java.util.Objects;

public class Cart {
    static ArrayList<Items> data = new ArrayList<>();

    public static ArrayList<Items> getData() { return data; }

    public static void appendData(Items i){ data.add(i); }
}
