#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int i=1;i<=15;i++){
            if((j>=n+1-i)){
                printf(" %d ",i);
                
            }else{
                printf(" ");
            }
            printf("\n");
        }
    }
}