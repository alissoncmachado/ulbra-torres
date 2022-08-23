/* Faça um programa para ler uma quantidade indeterminada de valores inteiros. Para cada valor fornecido 
escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O programa será encerrado 
imediatamente após a leitura de um valor NULO (zero) ou NEGATIVO. */

#include <stdio.h>
#include <stdlib.h>

int main () {
int num, total;

    printf("Informe um número para saber se ele é par ou ímpar: \n");
    printf("Ou informe um valor nulo ou negativo para sair do sistema. \n");

    do {
    printf("Informe um número: \n");
    scanf("%d", &num);
    total = num % 2;
            if (num > 0 && total == 0) {
                printf("O número %d é par\n\n", num);
            } else if (num > 0 && total != 0)  {
                printf("O número %d é ímpar\n\n", num);
            } 
    } while (num > 0);

    system("pause");
    return 0;
}