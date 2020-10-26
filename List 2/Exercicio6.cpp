#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float celsius, fah;
	
	printf("DIGITE O VALOR EM CELSIUS: ");
	scanf("%f", &celsius);
	
	fah = (9 * celsius + 160) / 5;
	
	printf("O VALOR EM FAHRENHEIT E IGUAL A: %.1f", fah);
}
