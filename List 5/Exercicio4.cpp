#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){
	int idade;
	
	printf("DIGITE SUA IDADE: ");
	scanf("%d", &idade);
	
	if (idade >= 5 && idade <= 7) {
		printf("\nCATEGORIA: INFANTIL A\n");
	} else if (idade >= 8 && idade <= 10){
		printf("\nCATEGORIA: INFANTIL B\n");
	} else if (idade >= 11 && idade <= 13){
		printf("\nCATEGORIA: JUVENIL A\n");
	} else if(idade >= 14 && idade <= 17){
		printf("\nCATEGORIA: JUVENIL B\n");
	} else if(idade >= 18){
		printf("\nCATEGORIA: SENIOR\n");	
	} else {
		printf("\nVALOR INVALIDO\n");
	}
	system("pause");
}
