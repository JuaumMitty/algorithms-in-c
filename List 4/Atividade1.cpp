#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int ladoA, ladoB, ladoC;
	printf("DIGITE O PRIMEIRO NUMERO: ");
	scanf("%d", &ladoA);	
	printf("DIGITE O SEGUNDO NUMERO: ");
	scanf("%d", &ladoB);
	printf("DIGITE O TERCEIRO NUMERO: ");
	scanf("%d", &ladoC);
	if(ladoA == ladoB && ladoA != ladoC || ladoB == ladoA && ladoB != ladoC || ladoC == ladoA && ladoC != ladoB || ladoB == ladoC && ladoB != ladoA) {
		printf("\nTRIANGULO ISOSCELES\n");
	}
	if(ladoA == ladoB && ladoA == ladoC && ladoB == ladoC) {
		printf("\nTRIANGULO EQUILATERO\n");
	}
	if(ladoA != ladoB && ladoA != ladoC && ladoB != ladoC) {
		printf("\nTRIANGULO ESCALENO\n");
	}
	system("pause");
}
	

