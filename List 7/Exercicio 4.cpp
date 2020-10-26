// 4) O departamento de Educação Física deseja informatizar este setor e colocou à disposição os seguintes dados de 40 alunos:

// Matrícula, sexo (M, F), altura (cm) e status físico (1–bom, 2–regular, 3–ruim)

// Estes dados deverão ser lidos através de uma unidade de entrada qualquer. Calcular e imprimir:
// a) A quantidade de alunos do sexo feminino com altura superior a 170 cm.
// b) A % de alunos do sexo masculino (em relação ao total de alunos do sexo masculino) cujo status físico seja bom.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int status, matricula, f = 0, m = 0, m1 = 0;
    float altura, p;
    char sexo;

    for(int i = 0; i <= 40; i++){
        printf("\nDIGITE SUA MATRICULA: formato(AAAA)  ");
        scanf("%d", &matricula);

        printf("DIGITE O SEU SEXO: formato(M/F)  ");
        scanf(" %c", &sexo);

        printf("DIGITE SUA ALTURA: formato(cm)  ");
        scanf("%f", &altura);

        printf("DIGITE SEU STATUS FISICO: (1 = Bom, 2 = Regular, 3 = Ruim)  ");
        scanf("%d", &status);
        
        if((sexo == 'f') || (sexo == 'F')){
            if(altura >= 170){
               f++; 
            }
        } else if((sexo == 'm') || (sexo == 'M')){
            m++;
            if (status == 1){
                m1++;
            }
        } else {
            printf("\nVALOR INVALIDO\n");
        }
    }

    p = 100 * m1 / m;

    printf("\nQUANTIDADE DE ALUNOS DO SEXO FEMININO COM ALTURA MAIOR QUE 170cm: %d\n", f);

    printf("\nA PORCENTAGEM DE ALUNOS DO SEXO MASCULINO COM STATUS FISICO IGUAL A BOM: %.2f\n", p);
}