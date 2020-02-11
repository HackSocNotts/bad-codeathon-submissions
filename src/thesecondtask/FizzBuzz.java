package thesecondtask;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class FizzBuzz {
    public static void main(String[] args) {
        try {
            int n;
            BufferedReader bufferedReader = new BufferedReader(new FileReader("resources/fizzBuzz.txt"));
            String line = bufferedReader.readLine();

            if (line.isEmpty()) {
                return;
            } else {
                n = Integer.parseInt(line);
            }

            fizzBuzz(n);


        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void fizzBuzz(int n) {
        for (int i = 1; i < n; i++) {
            if (i % 3 == 0) {
                System.out.print("  Fizz ");
            } else if (i % 5 == 0) {
                System.out.print(" Buzz  ");
            } else {
                System.out.print(i + " ");
            }
        }
    }
}
