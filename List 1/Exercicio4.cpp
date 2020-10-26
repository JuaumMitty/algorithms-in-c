#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float cliente1, cliente2, cliente3, cliente4, cliente5;
	float media;
	
	printf("Valor pago pelo cliente 1: ");
	scanf("%f", &cliente1);
	printf("Valor pago pelo cliente 2: ");
	scanf("%f", &cliente2);
	printf("Valor pago pelo cliente 3: ");
	scanf("%f", &cliente3);
	printf("Valor pago pelo cliente 4: ");
	scanf("%f", &cliente4);
	printf("Valor pago pelo cliente 5: ");
	scanf("%f", &cliente5);
	
	media = (cliente1 + cliente2 + cliente3 + cliente4 + cliente5) / 5;
	
	printf("Media: %.2f \n", media);
	
	system("Pause");	
	
}
