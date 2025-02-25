# include<stdio.h>

int main(){
    int n;
    int Sorted = 0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++) {
    if(arr[i] <=arr[i+1]){
        int Sorted = 1;
    }else{
        int Sorted = 0;;
    }
    }
    if(Sorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    

    
    return 0;
}

