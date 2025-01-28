#include <stdio.h>

int main() {
    int num1,num2;
    char op;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%c",&op);

    if(op == '+'){
        printf("%d", num1 + num2);
    }
    else if(op == '-'){
        printf("%d", num1 - num2);
    }
    else if(op == '*'){
        printf("%d", num1 * num2);
    }
    else if(op == '/'){
        printf("%f", num1 / num2);
    }
    return 0;
}