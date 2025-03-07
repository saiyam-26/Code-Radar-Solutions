int fib[50];
fib[0] = 0;
fib[1] = 1;

void fibonacciSeries(int n){
    if(n == 0){
        return fib[0];
    }
    else if(n == 1){
        return fib[1];
    }
    fib[n] = fib[n-2] + fib[n-1];
    return fib[n];
}