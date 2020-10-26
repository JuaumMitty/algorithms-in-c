// 1) Faça um programa que peça um número inicial e um número final, depois mostre todos os números que compõem o intervalo deles.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
    int i = 0, f = 0;

    printf("DIGITE O NUMERO INCIAL: ");
    scanf("%d", &i);

    printf("DIGITE O NUMERO FINAL: ");
    scanf("%d", &f);
    
    printf("\nNUMEROS ENTRE %d e %d\n", i, f);

    while(i < f){
        i++;
        printf("\n%d", i);
    }
}