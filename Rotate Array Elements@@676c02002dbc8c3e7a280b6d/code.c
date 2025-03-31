#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    scanf("%d",&index);
    for(int i=num-index;i<num;i++)printf("%d\n",arr[i]);
    for(int i=0;i<num-index;i++)printf("%d\n",arr[i]);
}