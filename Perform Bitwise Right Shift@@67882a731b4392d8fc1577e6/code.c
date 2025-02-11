// Your code here...
# include <stdio.h>
int main(){
    int num,shift;
    scanf("%d",&num);
    scanf("%d",&shift);

    int result = num >> shift;

    printf("%d",result);
}