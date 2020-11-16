// 3) Leia um vetor de 10 posicões e atribua valor 0 para todos os elementos que possuírem valores negativos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int v[10];

    for(int i = 0; i < 10; i++){
        printf("DIGITE O NUMERO DA POSICAO %d --> ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 10; i++){
        if(v[i] <= 0){
            v[i] = 0;
        }

        printf("\nVALOR NA POSICAO %d --> %d", i, v[i]);
    }
}
