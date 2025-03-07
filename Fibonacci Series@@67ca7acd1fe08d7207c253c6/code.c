
int fibonacciSeries(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{

        fibonacciSeries = fibonacciSeries(n-2) + fibonacciSeries(n-1);
        return fibonacciSeries;
    }
}