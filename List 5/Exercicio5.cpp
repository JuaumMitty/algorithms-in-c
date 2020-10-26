#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){
	float a, b, calc;
	char c1[2] = "+";
	char c2[2] = "-";
	char c3[2] = "/";
	char c4[2] = "*";
	char confC[2];
	
	printf("DIGITE O VALOR A: ");
	scanf("%f", &a);
	
	printf("DIGITE O VALOR B: ");
	scanf("%f", &b);
	
	printf("DIGITE O VALOR C: ");
	scanf("%s", &confC);
	
	if(strcmp(confC, c1) == 0){
		calc = a + b;
		printf("O RESULTADO DA OPERACAO E: %.0f\n", calc);
	} else if (strcmp(confC, c2) == 0){
		calc = a - b;
		printf("O RESULTADO DA OPERACAO E: %.0f\n", calc);
	} else if (strcmp(confC, c3) == 0){
		calc = a / b;
		printf("O RESULTADO DA OPERACAO E: %.2f\n", calc);
	} else if (strcmp(confC, c4) == 0){
		calc = a * b;
		printf("O RESULTADO DA OPERACAO E: %.0f\n", calc);
	} else {
		printf("\nOPERADOR INVALIDO\n");
	}
	system("pause");
}
