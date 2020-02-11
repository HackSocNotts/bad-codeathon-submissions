package thesecondtask;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class FizzyBuzz {
    public static void main(String[] argumentsWhichAreNeverUsedLol)  {
        try {
            int n;
            BufferedReader BufferedReaderButYouNeverWouldHaveGuessed = new BufferedReader(new FileReader("resources/fizzBuzz.txt"));
            String line = BufferedReaderButYouNeverWouldHaveGuessed.readLine();

            if (line.isEmpty() && line == null && line == "" && line.length() == 0) {
                return;
            } else if (!line.isEmpty() && line != null && line != "" && line.length() != 0 && line.length() >= 1 && BufferedReaderButYouNeverWouldHaveGuessed != null){
                n = Integer.parseInt(line);
                fizzBuzz(n);
            }
        } catch (IOException e) {
            e.printStackTrace();
            System.out.println("IOException was thrown");
        } catch (NullPointerException e) {
            System.out.println("NullPointerException was thrown");
        } catch (ArrayIndexOutOfBoundsException) {
            // TODO find out what an array is. iT sounds coOl
            System.out.println("ArrayIndexOutOfBoundsException was thrown");
        }
        catch (Exception e) {
            System.out.println("For safety. Just in case.");
        }
        //TODO find out what an exception is
        //TODO remove the above TODO before committing to git
    }

    private static void fizzBuzz(int n){
        for (int i = 1; i < n; i++) {
            if (i < n && i % 3 == 0){
                System.out.print("  Fizz ");
            } if (i < n && i%3 != 0 && i % 5 == 0)
            {
                System.out.print(" Buzz  ");
            }
            else {
                System.out.print(i + " ");
            }
        }
        return;
    }
}
