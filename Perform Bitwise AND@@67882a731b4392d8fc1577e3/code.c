#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);

    int AND = (num1 & num2);

    printf("%d",AND);


    return 0;
}