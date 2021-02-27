int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n > 1)
        return fibonacci(n - 1) + fibonacci(n - 2);
    else
        return 1;
}

