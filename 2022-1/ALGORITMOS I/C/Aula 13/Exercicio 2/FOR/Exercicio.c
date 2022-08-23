/* Efetue um programa que mostre todos os números inteiros ímpares situados na faixa de 
1000 a 1500. Esse algoritmo deve ser feito duas vezes uma usando o FOR */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero;

    printf ("A seguir números ímpares entre 1000 e 1500:\n");

    for (int i = 1;i<=1500;i++) {
        numero = i % 2;
            if (numero % 2 != 0  && i >=1000 && i <=1500)     
            printf ("Numero ímpar: %d\n", i);
            i++;
    }

    system("pause");
    return 0;
}