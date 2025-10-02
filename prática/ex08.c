#include <stdio.h>

int main(){

    int n = 1, soma;

    while(n <= 10){
        soma += n;
        n++;
    }

    printf("Soma dos números: %d", soma);
}
