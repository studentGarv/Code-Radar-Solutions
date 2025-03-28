#include<stdio.h>
int main(){
    int i;

    if(i%3==0){
        printf("Divisible by 3");
    }
    if(i%5==0){
        printf("Divisible by 5");
    }
    else if(i%3==0 && i%5==0){
        printf("Divisible by Both");
    }
}