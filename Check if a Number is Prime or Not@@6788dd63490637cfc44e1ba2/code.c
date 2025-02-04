#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int isPrime = 1;
    scanf("%d",&num);

    if(num==1){
        printf("Not Prime");

    }else{
        for(int i=2;i<(num);i++){
            if(num%i==0){
                isPrime=0;
                break;
            }
        }
    if(isPrime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    }
            

    return 0;
}