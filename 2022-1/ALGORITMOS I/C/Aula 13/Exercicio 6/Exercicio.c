/* Efetue um programa que leia 5 números. Para cada número fornecido, 
escrever se ele é NULO, NEGATIVO ou POSITIVO. */
#include <stdio.h>
#include <stdlib.h>

int main () {
    int num;

    for (int i = 1; i<=5; i++) {
    printf("Informe um número: \n");
    scanf("%d", &num);
        if (num < 0) {
            printf("Número %d é negativo\n\n", num);
        } else if (num > 0) {
            printf("Número %d é positivo\n\n", num);
        } else {
            printf("Número %d é nulo\n\n", num);
        }
    }
    printf("Fim do algoritmo.\n");
    system("pause");
    return 0;
}