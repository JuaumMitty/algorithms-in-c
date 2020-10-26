#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float saldo = 500.00, cheque, saldoT;
	
	printf("SALDO NO BANCO: %.2f", saldo);
	printf("\nDIGITE O VALOR DO CHEQUE: ");
	scanf("%f", &cheque);
	
	saldoT = saldo + cheque;
	
	printf("\nO VALOR TOTAL E IGUAL A: %.2f\n", saldoT);
}

