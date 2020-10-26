#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {
	int i, num;
	
	printf("\nESCOLHA UM NUMERO:");
	scanf("%d", &num);
	
	printf("\nNUMEROS IMPARES EXISTENTES ATE O: %d\n", num);
	for(i=1; i <= num; i++){
		if(i%2 != 0){
			printf("%d\n", i);
		} else {}
	}
	
	system("pause");
}
