#include <stdio.h>

int main() {
    int rc;
    scanf("%d",&rc);

    for(int i=1; i<=rc; i++){
        for(int j=1; j<=rc ;j++){
            if(j<i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
