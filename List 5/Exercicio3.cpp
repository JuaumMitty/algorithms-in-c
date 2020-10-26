#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){
	float valorP, total;
	
	printf("VALOR DO PRODUTO: ");
	scanf("%f", &valorP);
	
	if(valorP >= 20) {
		total = valorP + (valorP * 30/100);
		printf("\nLUCRO DE 30 PORCENTO \nTOTAL: %.2f\n", total);
	} else if (valorP < 20) {
		total = valorP + (valorP * 45/100);
		printf("\nLUCRO DE 45 PORCENTO \nTOTAL: %.2f\n", total);
	}
	
	system("pause");
	
	}
