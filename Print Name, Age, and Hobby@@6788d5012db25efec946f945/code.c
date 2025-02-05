#include <stdio.h>

int main(){
    int age;
    char name[100];
    char hobby[100];

    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);

    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);

}