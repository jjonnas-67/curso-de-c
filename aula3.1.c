#include <stdio.h>

#define texto "Entrada e saída de dados."

int main(){

    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Os dados informados foram:\n");
    printf("Nome: %s.\n", nome);
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
}
