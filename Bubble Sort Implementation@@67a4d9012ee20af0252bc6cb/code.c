void bubbleSort(int arr,int n){
    for(int j=0;j<n;j++){
        for(int k=0;k<=n-j-1;k++){
            if(arr[j]>arr[k]){
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
}
void printArray(int arr,int n){
    for(int z=0;z<n;z++){
       printf("%d",arr[z]);
    }
}