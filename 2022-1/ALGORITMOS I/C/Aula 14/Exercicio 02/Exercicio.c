/* Faça um programa para repetir a leitura de um número enquanto o valor fornecido for diferente de 0.
 Para cada número fornecido, escrever se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a
  repetição deve ser encerrada sem escrever mensagem alguma. */

#include <stdio.h>
#include <stdlib.h>

int main () {
int num, total;

    printf("Informe um número para saber se ele é par ou ímpar: \n");
    printf("Ou informe 0 para sair do sistema. \n");

    do {
    printf("Informe um número: \n");
    scanf("%d", &num);
    total = num % 2;
            if (num != 0 && total == 0) {
                printf("O número %d é par\n\n", num);
            } else if (num != 0 && total != 0)  {
                printf("O número %d é ímpar\n\n", num);
            } 
    } while (num > 0 || num < 0);

    system("pause");
    return 0;
}