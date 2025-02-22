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
        if(arr[i] == 1){
            printf("0");
        }else{
            int isPrime = 1;
            for(int j=2;j<=(arr[i]);j++){
                
                if(arr[i] % j == 0){
                    isPrime = 0;
                    break;
                }
                
            }
            if(isPrime){
                printf("1");
            }else{
                printf("0");
            }
        }
        }
    
}