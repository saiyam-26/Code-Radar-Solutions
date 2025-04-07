void swap(int* i, int* j){
    int temp = *i;
    *i = *j;
    *j = temp;
}
void insertionSort(int arr[],int n){
    for(int j=0;j<n;j++){
        for(int k=0;k<n-j-1;k++){
            if(arr[k]>=arr[k+1]){
                swap(&arr[k],&arr[k+1]);
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int z=0;z<n;z++){
       printf("%d ",arr[z]);
    }
}