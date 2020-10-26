#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float salario, salarioTotal, vendas;
	
	printf("DIGITE O SEU SALARIO: ");
	scanf("%f", &salario);
	printf("DIGITE O TOTAL DE VENDAS NO MES: ");
	scanf("%f", &vendas);
	
	if (vendas >= 100 && vendas < 500){
		salarioTotal = salario + 50;
		printf("PREMIO DE 50 REAIS, SALARIO TOTAL DO MES: %.2f\n", salarioTotal);
	} else if (vendas >= 500 &&  vendas <= 750){
		salarioTotal = salario + 70;
		printf("PREMIO DE 70 REAIS, SALARIO TOTAL DO MES: %.2f\n", salarioTotal);		
	} else if (vendas >= 750){
		salarioTotal = salario + 100;
		printf("PREMIO DE 100 REAIS, SALARIO TOTAL DO MES: %.2f\n", salarioTotal);		
	}
	system("pause");
}

