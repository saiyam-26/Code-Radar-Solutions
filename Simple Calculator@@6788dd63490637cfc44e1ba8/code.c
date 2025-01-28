#include <stdio.h>

int main() {
    int num1,num2;
    char op;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%c",&op);

    switch(op){
        case'+':
        printf("%d",num1 + num2);
        break;
        case'-':
        printf("%d",num1 - num2);
        break;
        case'*':
        printf("%d",num1 * num2);
        break;
        case'/':
        printf("%d",num1 / num2);
        break;
    }
    return 0;
}