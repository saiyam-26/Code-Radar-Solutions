#include <stdio.h>
int main(){
    int n;
    int k=1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            if(j>=i){
                printf("%d",k);
                k++;
            }el}se{
                printf(" ");
            }
        
        printf("\n");
    }
}