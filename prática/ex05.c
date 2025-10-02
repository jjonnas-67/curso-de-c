#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite o primeiro número:\n");
    scanf("%d", &n1);

    printf("Digite o segundo número:\n");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O maior número é o %d.\n", n1);
    }

    if(n2 > n1){
        printf("O maior número é o %d.\n", n2);
    }

    if(n1 == n2){
        printf("Os numeros são iguais.\n");
    }
}