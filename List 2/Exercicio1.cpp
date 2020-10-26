#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float Pnumero, Snumero, soma, sub, multi, div;
	
	printf("DIGITE O PRIMEIRO NUMERO: ");
	scanf("%f", &Pnumero);
	printf("DIGITE O SEGUNDO NUMERO: ");
	scanf("%f", &Snumero);
	
	soma = Pnumero + Snumero;
	sub = Pnumero - Snumero;
	multi = Pnumero * Snumero;
	div = Pnumero / Snumero;
	
	printf("O VALOR DA SOMA DE %.0f",Pnumero); 
	printf(" E %.0f", Snumero);
	printf(" E IGUAL A: %.0f",soma);
	
	printf("\nO VALOR DA SUBTRACAO DE %.0f",Pnumero); 
	printf(" E %.0f", Snumero);
	printf(" E IGUAL A: %.0f",sub);

	printf("\nO VALOR DA MULTIPLICACAO DE %.0f",Pnumero); 
	printf(" E %.0f", Snumero);
	printf(" E IGUAL A: %.0f",multi);
	
	printf("\nO VALOR DA DIVISAO DE %.0f",Pnumero); 
	printf(" E %.0f", Snumero);
	printf(" E IGUAL A: %.2f\n",div);
}
