int fibonacciSeries(int n) { 
    if (n == 1) {
        printf("1");
    } 
    fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}