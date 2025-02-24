#include <stdio.h>
#include <ctype.h>
int main(){
    char x;
    scanf(" %c",&x);
    if(isupper(x)){
        printf("%c",tolower(x));
    }
    else if(islower(x)){
        printf("%c",toupper(x));
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}