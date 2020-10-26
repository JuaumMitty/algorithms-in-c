#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){
	float nota1, nota2, nota3, media, falta;
	char nome[100];
	
	printf("DIGITE SEU NOME: ");
	scanf("%s", &nome);
	
	printf("NOTA 1: ");
	scanf("%f", &nota1);
	
	printf("NOTA 2: ");
	scanf("%f", &nota2);
	
	printf("NOTA 3: ");
	scanf("%f", &nota3);
	
	printf("\nTOTAL DE FALTAS: ");
	scanf("%f", &falta);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	if(media >= 7 && falta <= 20){
		printf("\nSITUACAO FINAL: APROVADO\n");
	} else if (media >= 7 && falta > 20) {
		printf("\nSITUACAO FINAL: REPROVADO POR FALTA\n");
	} else if (media < 7 && falta <= 20){
		printf("\nSITUACAO FINAL: REPROVADO POR MEDIA\n");
	} else if (media < 7 && falta > 20) {
		printf("\nSITUACAO FINAL: REPROVADO POR FALTA E MEDIA\n");
	}
	
	system("pause");
}
