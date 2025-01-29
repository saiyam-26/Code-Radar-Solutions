#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    printf("You entered:");
    puts(str1);
    printf("and");
    puts(str2);

    return 0;
}