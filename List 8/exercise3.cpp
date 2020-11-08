// 3) Faça um programa que lê uma matriz de 3 x 3, multiplica cada elemento por 5 e imprime o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int v[3][3];
    int resultado;

    for(int L = 0; L < 3; L++){
        for(int C = 0; C < 3; C++){
            printf("DIGITE O VALOR DA MATRIZ NA POSICAO L%d C%d: ", L, C);
            scanf("%d", &v[L][C]);
        }
    }

    for(int L = 0; L < 3; L++){
        for(int C = 0; C < 3; C++){
        	resultado = v[L][C] * 5;
            printf("\nVALOR MULTIPLICADO POR 5: %d", resultado);

        }
    }
}