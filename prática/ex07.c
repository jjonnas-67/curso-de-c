#include <stdio.h>

int main(){

    float n1, n2, n3, soma, media;

    printf("Nota do Trabalho de Laborátorio:\n");
    scanf("%f", &n1);

    printf("Nota de Avaliação semestral:\n");
    scanf("%f", &n2);

    printf("Nota do Exame Final:\n");
    scanf("%f", &n3);

    soma = (n1 * 2) + (n2 * 3) + (n3 * 5);
    media = soma / 10;

    if(media >= 8.0 && media <= 10.0){
        printf("Conceito: A\n");
    }
    else if(media >= 7.0){
        printf("Conceito: B\n");
    }
    else if(media >= 6.0){
        printf("Conceito: C\n");
    }
    else if(media >= 5.0){
        printf("Conceito: D\n");
    }
    else {
        printf("Conceito: E\n");
    }

}