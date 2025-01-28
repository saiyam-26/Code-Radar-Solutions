#include <stdio.h>

int main() {
    int s1,s2,s3;
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);

    if(s1!=s2!=s3){
        printf("Scalene");
    }else if((s1==s2!=s3)||(s1==s3!=s2)||(s2==s3!=s2)){
        printf("Isosceles");
    }else{
        printf("Equilateral");
    }
    return 0;
    }

