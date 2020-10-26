#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float valorF, revendedor = 0.25, impostos = 0.45, valorC, calculaP;
	
	printf("DIGITE O VALOR DE FABRICA DO CARRO: ");
	scanf("%f", &valorF);
	
	calculaP = valorF + ((valorF * revendedor) + (valorF * impostos));
	
	printf("\nO VALOR FINAL DO CARRO E IGUAL A: %.2f\n", calculaP);
}
