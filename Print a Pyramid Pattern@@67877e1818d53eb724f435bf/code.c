#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=15;j++){
            if((j>=8-i)&&(j<=6+i)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}