package me.monotron.badcode.fibonacci.factory;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

public class FibonacciFactory {

    private ArrayList<FibonacciValue> values;
    private int numberOfTerms;

    private FibonacciFactory(int numberOfTerms) {
        this.numberOfTerms = numberOfTerms;
    }

    public List<FibonacciValue> getValues() {
        if(Objects.nonNull(values)) {
            return values;
        }

        values = new ArrayList<>();

        BigInteger n1 = BigInteger.ZERO, n2 = BigInteger.ONE;
        for (int i = 0; i <= numberOfTerms; i++) {
            values.add(new FibonacciValue.Builder()
                    .withValue(n1)
                    .build());

            BigInteger sum = n1.add(n2);
            n1 = n2;
            n2 = sum;
        }

        return values;
    }

    public static class Builder {
        private int terms;

        public Builder numberOfTerms(int terms) {
            this.terms = terms;
            return this;
        }

        public FibonacciFactory build() {
            return new FibonacciFactory(terms);
        }
    }
}
