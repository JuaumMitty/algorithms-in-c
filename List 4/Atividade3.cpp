#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int unidade; 
	float valorUni, des, valorTotal;
	
	printf("DIGITE O VALOR DO PRODUTO: ");
	scanf("%f", &valorUni);
	
	printf("DIGITE A QUANTIDADE DE UNIDADES COMPRADAS: ");
	scanf("%d", &unidade);
	
	valorTotal = unidade * valorUni;
	
	if(unidade < 10){
		printf("NENHUM DESCONTO APLICADO, O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} 	else if (unidade < 21){
			des = valorTotal - (valorTotal * 0.1);
			printf("10 PORCENTO DE DESCONTO APLICADO, O VALOR DA COMPRA E: %.2f\n", des);
	}  else if (unidade < 50){
			des = valorTotal - (valorTotal * 0.2);
			printf("20 PORCENTO DE DESCONTO APLICADO, O VALOR DA COMPRA E: %.2f\n", des);
	} else if (unidade > 50){
			des = valorTotal - (valorTotal * 0.3);
			printf("30 PORCENTO DE DESCONTO APLICADO, O VALOR DA COMPRA E: %.2f\n", des);
	}	
	system("pause");
}
