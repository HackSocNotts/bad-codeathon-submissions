package me.monotron.badcode.fibonacci.factory;

import java.math.BigInteger;

public class FibonacciValue {

    private BigInteger value;

    private FibonacciValue(BigInteger value) {
        this.value = value;
    }

    public BigInteger getValue() {
        return value;
    }

    static class Builder {
        private BigInteger value;

        Builder withValue(BigInteger value) {
            this.value = value;
            return this;
        }

        FibonacciValue build() {
            return new FibonacciValue(value);
        }
    }
}
