#include<stdio.h>
int main(){
    int a,arr[a];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        // printf("%d ",arr[i]);
    }
    for(int j=0;j<a;j++){
        if(arr[j]<arr[j+1]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }    
}