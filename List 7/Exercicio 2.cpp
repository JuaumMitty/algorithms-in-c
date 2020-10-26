// 2) Faça um programa que peça a senha e exiba “Correta!” se o valor corresponder a “12345”. Caso contrário, peça a senha novamente.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int senha = 12345, cSenha;
    bool v = true;

    while(v == true){
        printf("\nDIGITE SUA SENHA: ");
        scanf(" %d", &cSenha);

        if(senha == cSenha){
            printf("\nSENHA CORRETA!");
            v = false;
        } else {
            printf("\nSENHA INCORRETA, DIGITE NOVAMENTE!");
            v = true;
        }
    }
}