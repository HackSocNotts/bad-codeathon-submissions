import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Task1Fibonacci {

    public static void main(String[] args) {

        int n;

        try {
            BufferedReader bufferedReader = new BufferedReader(new FileReader("resources/task1.txt"));
            String line = bufferedReader.readLine();

            if (line.isEmpty()) {
                return;
            } else {
                n = Integer.parseInt(line);
            }

            System.out.print("fibonacci of " + n + " is " + runFibonacci(n));

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static int runFibonacci(int n) {
        if (n == 0) {
            return 0;
        }
        else {
            return fibonacci(n-1);
        }
    }

    public static int fibonacci(int n){
        switch (n)
        {
            case 0:
                return 0;
            case 1:
                return 1;
            default:
                return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
}
