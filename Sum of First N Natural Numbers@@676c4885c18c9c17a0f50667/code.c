#include<stdio.h>
int main(){
    int n,temp =0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        temp+=i;
    }
    printf("%d ",temp);
}