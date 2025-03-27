void bubbleSort(int arr,int n){
    for(int j=0;j<n;j++){
        for(int k=0;k<=n-i-1;k++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
}
void printArray(int arr,int n){
    for(int i=0;i<n;i++){
       printf("%d",arr[i]);
    }
}