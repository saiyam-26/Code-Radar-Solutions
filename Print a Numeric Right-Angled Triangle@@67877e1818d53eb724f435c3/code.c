#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        int k=1
        for(int j=1;j<=num;j++){
            if(j>=i){
                printf("%d",&k);
                k++;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}