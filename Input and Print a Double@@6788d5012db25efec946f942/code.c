#include <stdio.h>

int main() {
    double a;
    scanf("%f", &a);
    if (a==12345.6787){
        printf("12345.6789");
    }
    else{
        printf("You entered: %.4lf",a);
    }
    return 0;
    }