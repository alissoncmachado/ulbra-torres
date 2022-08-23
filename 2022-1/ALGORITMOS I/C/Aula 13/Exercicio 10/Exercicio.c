/* Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem 
que indica se cada valor fornecido é PAR ou ÍMPAR. */
#include <stdio.h>
#include <stdlib.h>

int main () {
    
int i, num, total;

    i = 0;
    while (i <= 10) {
        printf("Informe um número: \n");
        scanf("%d", &num);
        total = num % 2;
            if (num == 0) {
                printf("O número %d é nulo\n", num);
            } else if (total != 0) {
                printf("O número %d é ímpar\n", num);
            } else {
                printf("O número %d é par\n", num);
            }
        i++;
    }

    printf("Fim do algoritmo\n");
    system("pause");
    return 0;
}