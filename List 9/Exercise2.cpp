// 2) Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int v[15], soma = 0;
    float media = 0;

    for(int i = 0; i < 15; i++){
        printf("DIGITE A NOTA DO ALUNO %d --> ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 15; i++){
        soma += v[i];
    }

    media = soma / 15;

    printf("\nMEDIA TOTAL --> %.2f", media);

}