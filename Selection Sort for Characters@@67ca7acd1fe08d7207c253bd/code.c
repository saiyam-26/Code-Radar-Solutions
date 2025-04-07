void swap(char* i, char* j){
    int temp = *i;
    *i = *j;
    *j = temp;
}
void selectionSort(char arr[],int n){
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
       printf("%c ",arr[z]);
    }
}