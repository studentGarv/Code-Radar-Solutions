#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("%d",a);
    }
    else if (b>c && b>a){
        printf("%d",b);
    }
    else if (c>b && c>a){
        printf("%d",c);
    }
    else if(a==b && b==c){
        printf("%d",a);
    }
}