#include <stdio.h>

int main(){

    int v[5] = {10, 20, 30, 40, 50};
    float s = 0;

    for(int i = 0; i <= 4; i++){
        s += v[i];
    }

    printf("Média: %.2f.\n", s/5);

}