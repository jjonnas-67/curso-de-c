#include <stdio.h>

float salario(int horas_t, float salario_min);

int main(){
    int hrs_trabalhadas;
    float slr_minimo;

    printf("Insira o número de horas tranalhadas: \n");
    scanf("%d", &hrs_trabalhadas);

    printf("Insira o valor do salário mínimo: \n");
    scanf("%f", &slr_minimo);

    printf("Salário a receber: %.2f.\n", salario(hrs_trabalhadas, slr_minimo));
}

float salario(int horas_t, float salario_min){

    float salario_bruto, valor_horast, imposto, salario_final;

    valor_horast = (salario_min / 2);
    salario_bruto = horas_t * valor_horast;
    imposto = salario_bruto * (3 / 100.0);
    salario_final = salario_bruto - imposto;

    return salario_final;
}