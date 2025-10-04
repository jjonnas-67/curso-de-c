#include <stdio.h>

float maior(float num1, float num2){
    if(num1 > num2){
        return num1;
    } else {
        return num2;
    }
}

int main(){
    float m, x, y;

    printf("Informe um número: \n");
    scanf("%f", &x);
    printf("Informe mais um número: \n");
    scanf("%f", &y);

    m = maior(x,y);

    printf("Maior número: %.2f.\n", m);
}