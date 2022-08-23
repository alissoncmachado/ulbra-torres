/* Faça um programa para ler dois números. Se os números forem iguais imprimir a mensagem: 
"NÚMEROS IGUAIS" e encerrar a execução; caso contrário, imprimir o de maior valor. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    printf("Informe o primeiro número: \n");
    scanf("%d", &num1);
    printf("Informe o segundo número: \n");
    scanf("%d", &num2);

    if (num1 == num2){
        printf("NÚMEROS IGUAIS.\n");
    } else if (num1 > num2){
        printf("O primeiro número %d, é maior.\n", num1);   
    } else {
        printf("O segundo número %d, é maior.\n", num2);   
    }
    system("pause");
    return 0;
}
