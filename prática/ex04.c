#include <stdio.h>

int main(){

    int seg, min, horas;

    printf("Informe o tempo em segundos:\n");
    scanf("%d", &seg);
    
    horas = seg / 3600;
    min = (seg % 3600) / 60;
    seg = (seg % 3600) % 60;

    printf("Horas: %d.\n", horas);
    printf("Minutos: %d.\n", min);
    printf("Segundos: %d.\n", seg);
}