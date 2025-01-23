#include <stdio.h>

int main() {
    
    float num1,num2,num3,avg;
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
    avg = (num1 +num2 + num3)/3;
    printf("Average: %0.2f",avg);

    return 0;
}