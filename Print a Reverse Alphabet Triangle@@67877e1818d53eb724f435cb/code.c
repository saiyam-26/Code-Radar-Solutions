#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            if(j<=n+1-i){
                printf("%c",ch);
                ch++;
            }
            i
        }
        printf("\n");
    }
}