// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char a=*;
//     for(int i=1;i<=n;i++){
//         printf("%c\n",a*i);
//     }
// }
#include <stdio.h>

int main() {
    int rows=5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
