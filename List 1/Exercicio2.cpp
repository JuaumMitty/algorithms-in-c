#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float QtdHoras, valorHora, valorRecebido;
	
	printf("Total de horas trabalhadas no mes: ");
	scanf("%f", &QtdHoras);
	
	printf("Valor recebido por hora: ");
	scanf("%f", &valorHora);
	
	valorRecebido = QtdHoras * valorHora;
	
	printf("Valor recebido no mes: %.2f \n", valorRecebido);
	system("Pause");
	
}
