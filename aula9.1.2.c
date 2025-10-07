#include <stdio.h>

void imprimir(int v[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d", v[i]);
    }
}

int main(){
    int vet[5] = {1, 2, 3, 4, 5};

    puts("Imprimindo: \n");
    imprimir(vet, 5);
}