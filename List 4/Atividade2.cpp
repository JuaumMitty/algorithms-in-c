#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int A, B, C;
	float areaT;
	printf("DIGITE O VALOR A: ");
	scanf("%d", &A);
	printf("DIGITE O VALOR B: ");
	scanf("%d", &B);
	printf("DIGITE O VALOR C: ");
	scanf("%d", &C);
	if(A > 0 && B > 0 && C > 0){
		areaT = (A + B) * C / 2;
		printf("\nA AREA DO TRAPEZIO E IGUAL A: %.1f\n", areaT);
	} else {
		printf("VALOR INVALIDO\n");
	}
	
	system("pause");
}
