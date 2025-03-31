#include<stdio.h>
int main(){
    int n,temp =1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        temp+=i;
        printf("%d ",temp);
    }
}