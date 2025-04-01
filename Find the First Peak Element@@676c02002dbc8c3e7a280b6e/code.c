#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        // printf("%d",arr[i]);
    }
    int temp;
    for(int j=0;j<n;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            break;
        }
        else if (arr[j+1]>arr[j]){
            temp=arr[j+1];
        }
    } 
    printf("%d",temp);  
}