package me.monotron.badcode.fibonacci.factory;

public class FibonacciValue {

    private long value;

    private FibonacciValue(long value) {
        this.value = value;
    }

    public long getValue() {
        return value;
    }

    static class Builder {
        private long value;

        Builder withValue(long value) {
            this.value = value;
            return this;
        }

        FibonacciValue build() {
            return new FibonacciValue(value);
        }
    }
}
