#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int TanqueF = 40;
	float TanqueV, KmRodado, consuM;
	
	printf("Kilometragem rodada desde o ultimo abastecimento: ");
	scanf("%f", &KmRodado);
	printf("Litros gastos desde o ultimo abastecimento: ");
	scanf("%f", &TanqueV);

	consuM = KmRodado / (TanqueF - TanqueV);
	
	printf("O consumo medio do combustivel e: %.2f \n", consuM);
	system("Pause");
}
