# include<stdio.h>
# include<math.h>
void checkPrime(int arr[],int n);
int main(){
    int t;
    scanf("%d",&t);
    int isPrime = 1;

    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }

    checkPrime(arr,t);
   
}

void checkPrime(int arr[],int n){
    if(arr[i] == 1){
        printf("0");
    }else{
        for(int i=2;i<=(arr[i]);i++){
        if(arr[i] % i == 0){
            isPrime = 0;
        }
    }
    }
    if(isPrime){
        printf("1");
    }else{
        printf("0");
    }
}