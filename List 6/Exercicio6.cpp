#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
	int num = 0, impar, par;
	while(num <= 1000){
		printf("\nESCOLHA UM NUMERO: ");
		scanf("%d", &num);
		
		if(num%2 != 0){
			impar = impar + num;
		} else {
			par = par + num;
		}
	}
	
		printf("\nSOMA DOS NUMEROS PARES: %d\n", par);
		printf("\nSOMA DOS NUMEROS IMPARES: %d\n", impar);
		
	system("pause");
}
