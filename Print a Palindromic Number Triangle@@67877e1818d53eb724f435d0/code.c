#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int k=1;

    for(int i=1;i<n;i++){
        for(intj=1;j<=13;j++){
            if((j>=8-i) &&(j<=6+i)){
                if(j<(j+1)/2){
                    printf("%d",k);
                    k++
                }
                else{
                    printf(" ");
                    k--;
                }
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}