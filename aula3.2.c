#include <stdio.h>

int main(){

    int A, B, soma, subtr, mult, divs;

    printf("Informe o primeiro valor:\n");
    scanf("%d", &A);

    printf("Informe o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divs = A / B;

    printf("Resultados:\n");
    printf("Soma: %d.\n", soma);
    printf("Subtra.: %d.\n", subtr);
    printf("Multiplic.: %d.\n", mult);
    printf("Divis.: %d.\n", divs);
}