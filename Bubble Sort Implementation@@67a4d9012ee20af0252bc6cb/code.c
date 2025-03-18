 void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    b = c;
}

bubbleSort(int arr , int n){
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i+1]){
            swap(&arr[i] , &arr[i+1])
        }
    }
}



void printArray(int arr, int n){

    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }

}