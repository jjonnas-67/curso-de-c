#include <stdio.h>

int main(){

    int digito, multipl;
    
    for(digito = 1; digito <= 10; digito++){
        for(multipl = 1; multipl <= 10; multipl++){
            printf("%d x %d = %d\n", digito, multipl, digito * multipl);
        }
        printf("\n");
    }
}