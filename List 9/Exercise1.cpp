// 1) Faça um programa que lê um vetor de inteiros n, depois lê n números inteiros e o programa imprime, em relação aos números inteiros, o maior valor, o menor valor, a média e quantos números foram maiores ou iguais a média. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, maior, menor, soma = 0;
    float media;

    printf("DIGITE O TAMANHO DO VETOR --> ");
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i<n; i++){
        printf("DIGITE O NUMERO DA POSICAO %d --> ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i<n; i++){

        soma += v[i];

        if(i == 0){
            maior = v[i];
            menor = v[i];
        }

        if(v[i] >= maior){
            maior = v[i];
        }

        if(v[i] <= menor){
            menor = v[i];
        }
    }

    media = soma/n;

    printf("MAIOR VALOR --> %d\n", maior);
    printf("MENOR VALOR --> %d\n", menor);
    printf("MEDIA DOS VALORES --> %.2f\n", media);
    

}