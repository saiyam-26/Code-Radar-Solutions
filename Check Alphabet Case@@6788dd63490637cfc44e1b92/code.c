#include <stdio.h>

int main() {
    
    char alphabet;
    scanf("%c",&alphabet);

    if((alphabet>='A') &&(alphabet<='Z')){
        printf("Uppercase");
    }
    else if((alphabet>='a') &&(alphabet<='z')){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }

    return 0;
}