int fibonacciSeries(int n) {
    if (n == 0) {
        printf("0");
    } 
    else if (n == 1) {
        printf("1");
    } 
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}