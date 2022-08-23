/* Faça um programa que escreva os números de 1 a 20, em ordem decrescente. */
#include <stdio.h>
#include <stdlib.h>

int main () {
    
int i, num;
    num = 20;
    i = 1;

    while (num >= 1) {
        printf("%d\n", num);
        num = num - 1;
    }

    system("pause");
    return 0;
}