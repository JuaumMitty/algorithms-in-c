// 4) Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float v[10];
    float soma;
    int negativo = 0;

    for(int i = 0; i<10; i++){
        printf("INSIRA UM NUMERO: ");
        scanf("%f", &v[i]);
    }

    for(int i = 0; i<10; i++){
        if(v[i] >= 0){
            soma += v[i];
        }

        if(v[i] < 0){
            negativo++;
        }
    }

    printf("\nSOMA DOS NUMEROS POSITIVO: %.2f", soma);
    printf("\nQUANTIDADE DE NUMEROS NEGATIVOS: %d", negativo);

}
