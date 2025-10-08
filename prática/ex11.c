#include <stdio.h>

float lucro(float pf, float luc);
float imposto(float pf, float imp);
float preco_final(float pf, float luc, float imp);

int main(){

    float preco_def, p_lucro, p_imposto;

    printf("Insira o preço de fábrica: \n");
    scanf("%f", &preco_def);

    printf("INsira a porcentagem de lucro do distribuidor: \n");
    scanf("%f", &p_lucro);

    printf("Insira a porcentagem de impostos: \n");
    scanf("%f", &p_imposto);
    
    float valor_lucro = lucro(preco_def, p_lucro);
    float valor_imposto = imposto(preco_def, p_imposto);
    float valor_final = preco_final(preco_def, valor_lucro, valor_imposto);

    printf("Lucro do distribuidor: R$%.2f\n", valor_lucro);
    printf("Impostos: R$%.2f\n", valor_imposto);
    printf("Preço final: R$%.2f\n", valor_final);

}

float lucro(float pf, float luc){
    return pf * (luc / 100.0);
}

float imposto(float pf, float imp){
    return pf * (imp / 100.0);
}

float preco_final(float pf, float luc, float imp){
    return pf + luc + imp;
}