#include <stdio.h>

int main() {
    int cp,sp;
    scanf("%d",&cp);
    scanf("%d",&sp);

    if(sp>cp){
        printf("Profit");
    }
    else if(sp<cp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}