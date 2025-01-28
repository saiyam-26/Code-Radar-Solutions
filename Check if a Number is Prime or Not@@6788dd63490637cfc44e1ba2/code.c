#include <stdio.h>

int main() {
    int num;
    int isPrime;
    scanf("%d",&num);

    if(num==1){
        printf("Not Prime");

    }
    else if(num==2){
        printf("Prime");
    }
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                isPrime=0;
                break;
            }else{
                isPrime=1;
            }
        }
    }

    if(isPrime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}