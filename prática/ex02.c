#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Informe a primeira nota:\n");
    scanf("%f", &n1);

    printf("Informe a segunda nota:\n");
    scanf("%f", &n2);

    printf("Informe a terceira nota:\n");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Media: %.2f.\n", media);
}