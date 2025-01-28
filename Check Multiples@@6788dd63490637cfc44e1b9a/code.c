#include <stdio.h>

int main() {
    int num,div;
    scanf("%d",&num);
    scanf("%d",&div);

    if(div%num==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}