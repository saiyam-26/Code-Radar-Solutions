int fibonacciSeries(int n) {
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}
for (int i=0;i<n;i++){
    fibonacciSeries(i);
}