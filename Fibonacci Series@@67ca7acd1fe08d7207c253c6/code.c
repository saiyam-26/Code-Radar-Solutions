#include <stdio.h>

// Recursive function to compute the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print the Fibonacci series using recursion
void fibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  // Calling the recursive function
    }
    printf("\n");
}
