# include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++) {
    if(arr[i] <=arr[i+1]){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    }
    

    for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
    }
    return 0;
}

