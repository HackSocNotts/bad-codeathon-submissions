package me.monotron.badcode.fibonacci;

import me.monotron.badcode.fibonacci.factory.FibonacciFactory;
import me.monotron.badcode.fibonacci.factory.FibonacciValue;

import java.util.List;

public class Fibonacci {

    public static void main(String[] args) {

        int numberOfTerms;

        if (args.length != 1) {
            System.out.println("Please specify a number of iterations as an argument.");
            System.exit(1);
        }

        numberOfTerms = Integer.parseInt(args[0]);

        FibonacciFactory factory = new FibonacciFactory.Builder()
                .numberOfTerms(numberOfTerms)
                .build();

        List<FibonacciValue> values = factory.getValues();

        System.out.println(values.get(values.size() - 1).getValue().toString());
    }
}
