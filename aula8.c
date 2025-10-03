#include <stdio.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pes.idade);
    printf("Insira um número real:\n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira uma palavra:\n");
    scanf("%s", &pes.nome);

    printf("\nAlterando com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

}