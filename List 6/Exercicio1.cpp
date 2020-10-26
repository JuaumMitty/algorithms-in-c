#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
	for(int i=1; i <= 10; i++){
		if(i%2 == 0) {
			printf("\nQuadrado de %d = %f\n",i, i*i);
		} else {
			printf("\nRaiz de %d = %.2f\n", i, sqrt(i));	
		}
	}
	system("pause");
}
