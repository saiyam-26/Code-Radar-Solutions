# include<stdio.h>
void reverse(int arr[],int n,int si,int ei);
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);
    k = k % n;

    reverse(arr,n,0,n-1);
    reverse(arr,n,0,k-1);
    reverse(arr,n,k,n-1);
    

    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    return 0;
}

void reverse(int arr[],int n,int si,int ei){
    while(si<ei){
        int temp = si;
        arr[si] = arr[ei];
        arr[ei] = temp;
    }
    
}