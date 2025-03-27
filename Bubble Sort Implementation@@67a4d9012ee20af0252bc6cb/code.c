void bubbleSort(int arr,int n){
    for(int j=0;j<n;j++){
        for(int k=0;k<=n-j-1;k++){
            if(arr[k]>arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
}
void printArray(int arr,int n){
    for(int z=0;z<n;z++){
       printf("%d",arr[z]);
    }
}