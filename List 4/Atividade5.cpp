#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int codigo, unidade;
	float valorTotal, refriL = 2.20, refriG = 3.00, suco = 3.00, sorvete1B = 2.00, sorvete1BC = 2.50, sorvete2B = 3.00, sorvete2BC = 3.50, sundae = 5.00, banana = 6.00, especial = 8.50;
	
	printf("DIGITE O CODIGO DO PRODUTO: ");
	scanf("%d", &codigo);
	
	printf("DIGITE A QUANTIDADE COMPRADA: ");
	scanf("%d", &unidade);
	
	if (codigo == 1) {
		valorTotal = unidade * refriL;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 2) {
		valorTotal = unidade * refriG;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 3) {
		valorTotal = unidade * suco;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 4) {
		valorTotal = unidade * sorvete1B;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 5) {
		valorTotal = unidade * sorvete1BC;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 6) {
		valorTotal = unidade * sorvete2B;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 7) {
		valorTotal = unidade * sorvete2BC;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 8) {
		valorTotal = unidade * sundae;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 9) {
		valorTotal = unidade * banana;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else if (codigo == 10) {
		valorTotal = unidade * especial;
		printf ("O VALOR DA COMPRA E: %.2f\n", valorTotal);
	} else {
		printf("\nVALOR INVALIDO\n");
	}
	
	system("pause");
}
