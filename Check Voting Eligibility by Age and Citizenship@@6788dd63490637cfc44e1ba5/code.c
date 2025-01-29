#include <stdio.h>

int main() {
    int age , cs;
    scanf("%d",&age);
    scanf("%d",&cs);
    
    if(cs == 1){
        if(age>=18){
            printf("Eligible");
        }else{
            printf("Not Eligible");
        }
    }else{
        printf("Not Eligible");
    }
    return 0;
}