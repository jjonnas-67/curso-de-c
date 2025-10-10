#include <stdio.h>

void calcKW(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc){
    *v_kw = v_sal / 1000;
    *v_rs = *v_kw * q_kw;
    *v_dsc = *v_rs * 0.85;

}

int main(){

    float slr_minimo, kw_gastos, val_kw, val_reais, val_desc;

    printf("Insira o valor do salário mínimo: \n");
    scanf("%f", &slr_minimo);

    printf("Insira a quantidade de KW gastos: \n");
    scanf("%f", &kw_gastos);

    calcKW(slr_minimo, kw_gastos, &val_kw, &val_reais, &val_desc);

    printf("Valor de 1 KW (em R$): %.2f.\n", val_kw);
    printf("Valor a ser pago pela residência (em R$): %.2f.\n", val_reais);
    printf("Valor com desconto (em R$): %.2f.\n", val_desc);

} 