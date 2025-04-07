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
        if (n=2 && arr[0]<arr[j]){
            temp=arr[j];
        }
        else if (arr[0]<arr[j] && arr[j]>arr[j+1]){
            temp=arr[j];
            break;
        }
         
    }
    printf("%d",temp);  
}