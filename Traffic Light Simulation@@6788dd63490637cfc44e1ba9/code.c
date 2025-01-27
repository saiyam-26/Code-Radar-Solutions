#include <stdio.h>

int main() {
    char light;
    scanf("%d",&light);

    if(light=='R'){
        printf("Stop");
    }
    else if(light=='G'){
        printf("GO");
    }
    if(light=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}