#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=6-i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}