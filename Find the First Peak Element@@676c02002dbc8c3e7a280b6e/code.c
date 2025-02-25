# include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int peak = 0;

    

    for (int i = 0; i < n-2; i++) {
    if(arr[i] > arr[i+1] && arr[i+1] > arr[i+2]){
        peak = arr[i+1];
         
    }
    }
    
    
    printf("%d ", peak);
   
    
    return 0;
}