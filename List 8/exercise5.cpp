// 5) Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a media dos valores.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int v[5];
    int menor = 0, maior = 0;
    float soma;

    for(int i = 0; i<5; i++){
        printf("DIGITE UM NUMERO: ");
        scanf("%d", &v[i]);
    }
    
    for(int i = 0; i<5; i++){
        soma += v[i];
        
        if(i == 0){
        	maior = v[i];
        	menor = v[i];
		}

        if(v[i] >= maior){
            maior = v[i];
        }

        if(v[i] < menor){
            menor = v[i];
        }
    }
    printf("\nMENOR NUMERO: %d", menor);
    printf("\nMAIOR NUMERO: %d", maior);
    printf("\nA MEDIA DOS NUMEROS E: %.2f", soma/5);
}