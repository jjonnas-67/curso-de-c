#include <stdio.h>

int ehprimo(int num){
    if(num < 2){
        return 0;
    } else {
        for(int i = 2; i <= num / 2; i++){
            if(num % i == 0){
                return 0;
            }
        }

    }
    return 1;
}

int main(){

    int vet[9];

    for(int i = 0; i < 9; i++){
        printf("Insira o valor para a posição %d: \n", i+1);
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < 9; i++){
        int num = vet[i];

        if(ehprimo(num)){
            printf("%d é primo, posição: %d.\n", num, i);
        }
        }
}