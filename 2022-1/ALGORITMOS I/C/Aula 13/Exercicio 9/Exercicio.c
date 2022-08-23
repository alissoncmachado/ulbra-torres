/* Elabore um programa que escreva a tabuada de um número qualquer. */
#include <stdio.h>
#include <stdlib.h>

int main () {
    
int i, num, total;
    printf("Informe um número: \n");
    scanf("%d", &num);
    printf("A tabuada do número escolhido de 0 a 10: \n");   

    i = 0;
    while (i <= 10) {
        total = i * num;
        printf("%d X %d = %d\n", num, i, total);
        i++;
    }

    system("pause");
    return 0;
}