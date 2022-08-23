/* Faça um programa para determinar se uma pessoa é maior ou menor de idade. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    printf("Informe sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");       
    }
   
    system("pause");
    return 0;
}
