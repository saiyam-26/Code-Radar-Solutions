#include <stdio.h>

int main() {
    int num,div;
    scanf("%d",&num);
    scanf("%d",&div);

    if(num%div==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}