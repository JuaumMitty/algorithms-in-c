//1) Faça um programa que lê N elementos e os coloca em um vetor de inteiros. A partir desses números, faça funções para:
// a. mostrar a quantidade de números pares e quais são eles
// b. mostrar a quantidade de números ímpares e quais são eles
// c. mostrar a quantidade de números negativos e quais são eles

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, par = 0, impar = 0, negativo = 0;

    printf("DIGITE O TAMANHO DO VETOR: ");
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i<n;i++){
        printf("\nDIGITE O NUMERO: ");
        scanf("%d", &v[i]);
    }

     for(int i = 0; i<n;i++){
        if(v[i]%2 == 0){
            par++;
        } else if (v[i]%2 != 0){
            impar++;
        }
		if (v[i] < 0) {
            negativo++;
        }
    }

    printf("\nQUANTIDADE NUMEROS PARES: %d", par);
    printf("\nQUANTIDADE NUMEROS IMPARES: %d", impar);
    printf("\nQUANTIDADE NUMEROS NEGATIVOS: %d", negativo);
    
}