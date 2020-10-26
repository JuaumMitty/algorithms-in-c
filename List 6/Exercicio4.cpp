#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
	int m = 1, f = 1;
	float salarioF, salarioM, salario, mSalarioF, mSalarioM, mediaF, mediaM;
	char sexo, validar;
	bool stop = false;
	for(int i = 1; stop == false; i++){
		printf("\nDIGITE O SEU SALARIO: ");
		scanf("%f", &salario);
		printf("\nSEXO: ");
		scanf(" %c", &sexo);
		
		if((sexo == 'F') || (sexo == 'f')){
			salarioF = salarioF + salario;
			f++;
			if(salario > mSalarioF) {
				mSalarioF = salario;
			}
			} else if((sexo == 'M') || (sexo =='m') ) {
			salarioM = salarioM + salario;
			m++;
			if(salario > mSalarioM) {
				mSalarioM = salario;
			}
		} else {
			printf("VALOR INVALIDO");
		}
		if ((i%3 == 0)){
			printf("\nDESEJA CONTINUAR? S / N   ");
			scanf(" %c", &validar);
			if((validar == 'S') || (validar == 's')){
				stop = false;
			} else if((validar == 'N') || (validar == 'n')){
				stop = true;
			} else {
				printf("\nVALOR INVALIDO\n");
			}
		}
	}
	mediaF = salarioF / (f - 1);
	mediaM = salarioM / (m - 1);
	printf("\nMEDIA SALARIAL FEMININA: R$ %.2f", mediaF);
	printf("\nMAIOR SALARIO FEMININO: R$ %.2f\n", mSalarioF);
	printf("\nMEDIA SALARIAL MASCULINA: R$ %.2f", mediaM);
	printf("\nMAIOR SALARIO MASCULINO: R$ %.2f\n", mSalarioM);
	system("pause");
}

