// 5) Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que estão em ambos os vetores.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a[10], b[10], i = 0, j = 0, k = 0;

    printf("\nVETOR A\n");

    for(i = 0; i < 10; i++){
        printf("DIGITE O NUMERO DA POSICAO %d --> ", i);
        scanf("%d", &a[i]);
    }

    printf("\nVETOR B\n");

    for(j = 0; j < 10; j++){
        printf("DIGITE O NUMERO DA POSICAO %d --> ", j);
        scanf("%d", &b[j]);
    }

    printf("\nVETOR C\n");

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(a[i] == b[j]){
                k++;
                printf("VALOR NA POSICAO %d --> %d\n", k, a[i]);
            }
        }
    }
}