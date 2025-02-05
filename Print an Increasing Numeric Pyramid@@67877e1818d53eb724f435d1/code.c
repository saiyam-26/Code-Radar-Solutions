#include <stdio.h>

int main(){
    int n;
    int k=1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int i=1;i<=15;i++){
            if((j>=8-i) && (j<=6+i)){
                printf("*");
                k=0;
            }else{
                k=1;
                printf(" ");
            }
            printf("\n");
        }
    }
}