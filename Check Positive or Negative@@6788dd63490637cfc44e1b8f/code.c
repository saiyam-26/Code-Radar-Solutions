#include <stdio.h>

int main() {
    
    int num;
    scanf("%d",&num);

    if(num > 0){
        printf("Positive");
    }
    else if(num < 0){
        printf("Negative");
    }
    if(num == 0){
        printf("Zero");
    }

    return 0;
}