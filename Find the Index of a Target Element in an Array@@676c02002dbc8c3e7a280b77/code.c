#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);

    for(int i=0;i<t;i++){
        if(arr[i]  == target){
            printf("%d",i);
        }
    
    
    return 0;
}