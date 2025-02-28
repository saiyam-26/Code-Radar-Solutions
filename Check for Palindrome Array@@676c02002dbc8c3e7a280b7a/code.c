# include<stdio.h>{
    int main(){
        int t;
        scanf("%d",&t);
        int arr[t];
        for(int i=0;i<n;i++){
            scanf("%d",arr[i]);
        }
        int flag = 1;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[n-i-1]){
                flag =0;
                break;
            }
        }
        if(flag = 1){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
}