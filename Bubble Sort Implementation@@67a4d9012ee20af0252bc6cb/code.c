void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

 void bubbleSort(int arr[] , int n){
    for(int j=0;j<n;j++){

        for(int i = 0; i <= n; i++){
            if(arr[i-1] > arr[i]){
                swap(&arr[i] , &arr[i+1]);
            }
        }
    }
}



void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

}