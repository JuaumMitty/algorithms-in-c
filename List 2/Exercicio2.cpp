#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float A = 5, B = 10, transformaA, transformaB;
	
	printf("\nO VALOR DE A E IGUAL A: %.0f", A);
	printf("\nO VALOR DE B E IGUAL A: %.0f", B);
	printf("\nPRESSIONE QUALQUER TECLA PARA INVERTER OS VALORES\n");
	system("pause");
	
	transformaA = A + A;
	transformaB = B - A;
	
	printf("\nO VALOR DE A AGORA E: %.0f", transformaA);
	printf("\nO VALOR DE B AGORA E: %.0f\n", transformaB);
}
