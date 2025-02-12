#include <stdio.h>

int main (){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (c == '+'){
        printf("%d",a + b);
    }
    if (c == '-'){
        printf("%d",a - b);
    }
    if (c == '*'){
        printf("%d",a * b);
    }
    if (b == 0){
        if (c == '/'){
        printf("Error");
        }
        else{
            printf("%d",a * b);
        }
    }
}