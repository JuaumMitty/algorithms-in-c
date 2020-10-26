#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float idade, meses, dias;
	
	printf("DIGITE SUA IDADE: ");
	scanf("%f", &idade);
	
	meses = idade * 12;
	dias = idade * 365;
	
	printf("VOCE TEM: %.0f", idade);
	printf(" ANOS, %.0f", meses);
	printf(" MESES E %.0f", dias);
	printf(" dias");

	
}
