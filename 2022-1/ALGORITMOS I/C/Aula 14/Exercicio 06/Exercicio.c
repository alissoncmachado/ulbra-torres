/* Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.  */

#include <stdio.h>
#include <stdlib.h>

int main () {
int senha, contador, passe;
passe = 1234;

for (contador = 0;contador!=passe;contador++) {
    printf("Informe a senha: \n");
    scanf("%d", &senha);
    if (senha==passe) {
        printf("ACESSO PERMITIDO\n");
        printf("Número de tentativas: %d\n", contador);   
        break;     
    } else {
        printf("ACESSO NEGADO\n");
    }
}
    system("pause");
    return 0;
}