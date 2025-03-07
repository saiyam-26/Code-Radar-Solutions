int fib[50];


int fibonacciSeries(int n){
    if(n == 0){
        printf("0");
    }
    else if(n == 1){
        printf("1");
    }
    if(fib[n] != -1){

        fib[n] = fibonacciSeries(n-2) + fibonacciSeries(n-1);
        return fib[n];
    }
}