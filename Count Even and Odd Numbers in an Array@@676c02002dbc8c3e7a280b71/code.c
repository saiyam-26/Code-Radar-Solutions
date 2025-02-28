#include<stdio.h>
int main(){
    int t;
    int even = 0;
    int odd = 0;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d",even);
    printf("%d",odd);
    
    return 0;
}