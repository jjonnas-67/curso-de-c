#include <stdio.h>

int main(){

    int esc;
    float n1, n2, res;

    printf("Digite 1 para somar;\n");
    printf("Digite 2 para subtrair;\n");
    printf("Digite 3 para multiplicar;\n");
    printf("Digite 4 para dividir;\n");
    scanf("%d", &esc);

    printf("Insira o primeiro valor: \n");
    scanf("%f", &n1);
    printf("Insira o segundo valor: \n");
    scanf("%f", &n2);
    
    switch(esc){
        case 1:
            res = n1 + n2;
            printf("Soma: %.2f.\n", res);
            break;
        case 2:
            res = n1 - n2;
            printf("Subtração: %.2f.\n", res);
            break;
        case 3:
            res = n1 * n2;
            printf("Multiplicação: %.2f.\n", res);
            break;
        case 4:
            if(n2 == 0){
                printf("Erro: divisão por zero não é permitida.\n");
            }
            else {
                res = n1 / n2;
                printf("Divisão: %.2f.\n", res);
            }
            break;
        default:
            printf("Valor inválido.\n");
            break;
    }
}
