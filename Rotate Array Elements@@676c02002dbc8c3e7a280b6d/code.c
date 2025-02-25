# include<stdio.h>
void reverse(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);

    reverse(arr,n,0,n-1);
    reverse(arr,n,0,k-1);
    reverse(arr,n,k,n-1);



    return 0;
}

void reverse(int arr[],int n,int si;int ei){
    int i,temp;
    for(i=si;i<ei;i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}