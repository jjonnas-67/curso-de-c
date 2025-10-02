#include <stdio.h>

int main(){

    float salario, percentual, aumento, reajuste;

    printf("Informe o salario do funcionario:\n");
    scanf("%f", &salario);

    printf("Informe o percentual do aumento:\n");
    scanf("%f", &percentual);

    aumento = salario * (percentual / 100);
    reajuste = salario + aumento;

    printf("Valor do aumento: %.2f.\n", aumento);
    printf("Valor do novo salario: R$%.2f.\n", reajuste);
}