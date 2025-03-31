#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char a="*";
    for(int i=1;i<=n;i++){
        printf("%c\n",a*i);
    }
}