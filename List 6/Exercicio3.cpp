#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {
	int i, idade = 1, somaIdade;
	float media;
		
	for(i = 0; idade != 0; i++){
		printf("\nDIGITE A IDADE: ");
		scanf("%d", &idade);
		
		somaIdade = somaIdade+idade;
	}
	
	media = somaIdade / (i-1);
	
	printf("\nA MEDIA DE TODAS AS IDADES E IGUAL A: %.1f\n", media);
	system("pause");
}

