// 3) Faça um algoritmo que leia matricula, salario e tempo de serviço ( em anos ) dos funcionários de uma empresa. O algoritmo deve calcular o reajuste do salario da seguinte forma:

// • até 5 anos de serviço - 10%
// • acima de 5 anos de serviço - 15¨%


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){
    int matricula, tServico;
    float salario, rSalario, tSalario;
    int i;

    for (i = 0; matricula != 0; i++){

        printf("\n\nDIGITE A SUA MATRICULA: formato(AAAA) ");
        scanf("%d", &matricula);

        printf("DIGITE SEU TEMPO DE SERVICO: formato(A) ");
        scanf("%d", &tServico);

        printf("DIGITE O SEU SALARIO: formato(AAAA,AA) ");
        scanf("%f", &salario);

        if(tServico > 5) {
            rSalario = salario + (salario * 0.15);
        } else {
            rSalario = salario + (salario * 0.10);
        }

        printf("\nMATRICULA: %d", matricula);
        printf("\nSALARIO: R$ %.2f", salario);
        printf("\nREAJUSTE DE SALARIO: R$ %.2f", rSalario);

        tSalario = salario + salario;
    }

    printf("\n\nTOTAL DE SALARIO: R$ %.2f", tSalario);
    printf("\nTOTAL DE FUNCIONARIOS: %d", i);
}