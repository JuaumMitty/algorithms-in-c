// 2) Faça um programa que lê um vetor com 15 elementos inteiros e verifica a existência de um número x no vetor. O programa deve mostrar a posição (ou as posições) em que x aparece no vetor.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int v[15]; 
    int x = 0;

    for(int i = 0; i<15; i++){
        printf("DIGITE UM NUMERO: ");
        scanf("%d", &v[i]);
    }

    printf("DIGITE UM NUMERO A SER ENCONTRADO NO VETOR: ");
    scanf("%d", &x);

    for(int i = 0; i<15; i++){
        if (v[i] == x){
            printf("\nNUMERO %d ENCONTRADO NA POSICAO: %d", x, i);
        }
    }
}