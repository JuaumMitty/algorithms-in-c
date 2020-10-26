#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int cliente1, cliente2, cliente3;
	float compra1, compra2, compra3, valorM, totalC;
	
	printf("1 DIGITE O SEU CODIGO DE CADASTRO: ");
	scanf("%d", &cliente1);
	
	printf("DIGITE O VALOR DA COMPRA: ");
	scanf("%f", &compra1);
	
	printf("\n2 DIGITE O SEU CODIGO DE CADASTRO: ");
	scanf("%d", &cliente2);
	
	printf("DIGITE O VALOR DA COMPRA: ");
	scanf("%f", &compra2);

	printf("\n2 DIGITE O SEU CODIGO DE CADASTRO: ");
	scanf("%d", &cliente3);
	
	printf("DIGITE O VALOR DA COMPRA: ");
	scanf("%f", &compra3);
	
	totalC = compra1 + compra2 + compra3;
	printf("\nVALOR TOTAL DAS COMPRAS: %.2f\n", totalC);
	valorM = (compra1 + compra2 + compra3) / 3;
	printf("\nVALOR MEDIO POR COMPRA: %.2f\n", valorM);	
		
	if (compra1 > 100){
		printf("\nCODIGOS DOS CLIENTES QUE EFETUARAM COMPRAS ACIMA DE 100 REAIS: %d", cliente1);
	}
	if (compra2 > 100){
		printf(", %d", cliente2);
	}
	if (compra3 > 100){
		printf(", %d", cliente3);
	} else {	
		printf("\nNENHUM VALOR ACIMA DE 100 REAIS\n");
	}
	int cont = 0;
 	if(compra1<50){
		cont++;
 	}
 	if(compra2<50){
 		cont++;
 	}
 	if(compra3<50){
 		cont++;
 	}
	printf("\nQUANTIDADE DE COMPRAS MENORES QUE 50 REAIS: %d\n", cont);
	system("pause");
}
