#include <stdio.h>

int main() {
    int a,b,c;
    float d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=a+b+c;
    printf("Average: %.2f",d/3);
    return 0;
}