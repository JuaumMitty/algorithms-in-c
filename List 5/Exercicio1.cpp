#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {
	char senha[12] = "batatafrita";
	char confSenha[12];
	
	printf("DIGITE SUA SENHA: ");
	scanf("%s", &confSenha);
	
	if(strcmp(confSenha, senha) == 0){
		printf("\nACESSO PERMITIDO\n");
	} else {
		printf("\nVOCE NAO TEM ACESSO\n");
	}
	system("pause");
}
