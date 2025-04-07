#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        // printf("%d",arr[i]);
    }
    int temp = 0;
    for(int j=1;j<n;j++){
        if (arr[0]<arr[j] && arr[j]>arr[j+1]){
            temp=arr[j];
            break;
        }
        // else{
        //     temp=arr[0];
        // }
    }
    printf("%d",temp);  
}