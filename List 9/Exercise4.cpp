// 4) Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[10], b[10], c[10];

    printf("\nVETOR A\n");

    for(int i = 0; i < 10; i++){
        printf("DIGITE O NUMERO DA POSICAO %d --> ", i);
        scanf("%d", &a[i]);
    }

    printf("\nVETOR B\n");

    for(int i = 0; i < 10; i++){
        printf("DIGITE O NUMERO DA POSICAO %d --> ", i);
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < 10; i++){
       c[i] = a[i] - b[i];
    }

    printf("\nVETOR C\n");

    for(int i = 0; i < 10; i++){
       printf("\nVALOR NA POSICAO %d --> %d", i, c[i]);
    }
}

