#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int codVendedor;
	float salarioB, totalVendas, calcSalario;
	
	printf("Insira o codigo do vendedor: ");
	scanf("%d", &codVendedor);
	printf("Insira seu salario base: ");
	scanf("%f", &salarioB);
	printf("Insira o valor total das vendas no mes: ");
	scanf("%f", &totalVendas);
	
	calcSalario = salarioB + totalVendas * 0.15;
	
	printf("Codigo do vendedor: %.2d \n", codVendedor);
	printf("Total Salario: %.2f \n", calcSalario);
	
	system("Pause");
	
	
	
	
	
}
