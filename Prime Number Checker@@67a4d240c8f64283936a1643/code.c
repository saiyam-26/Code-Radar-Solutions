# include<stdio.h>
# include<math.h>
void checkPrime(int arr[],int n);
int main(){
    int t;
    scanf("%d",&t);
    
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }

    checkPrime(arr,t);
   
}

void checkPrime(int arr[],int n){
    for(int i=0;i<n;i++){
        int isPrime = 1;
        if(arr[i] == 1){
            printf("0");
        }
        else{
            for(int j=2;j<n;j++){
                if(arr[i]%j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("1");
            }
            else{
                printf("0");
            }

        }
    }
    
}