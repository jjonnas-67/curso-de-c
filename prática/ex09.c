#include <stdio.h>

int main(){

    int n1 = 0, n2 = 1, n3, i = 1;

    printf("%d \n", n1);
    printf("%d \n", n2);

    while(i <= 8){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        i++;
    printf("%d \n", n3);
    }
}