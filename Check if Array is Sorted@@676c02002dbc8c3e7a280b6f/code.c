# include<stdio.h>

int main(){
    int n;
    int Sorted = 1;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++) {
    if(arr[i] > arr[i+1]){
         Sorted = 0;
         break
    }
    }
    if(Sorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    

    
    return 0;
}

