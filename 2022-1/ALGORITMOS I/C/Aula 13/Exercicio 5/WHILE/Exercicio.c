/* Faça um programa que leia um número N, e realize a soma dos números de 1 a N. Ao final, deve-se 
escrever o resultado. Esse algoritmo deve ser feito duas vezes uma usando o While */
#include <stdio.h>
#include <stdlib.h>

int main () {
    int num1, soma, i;
    printf ("Informe um número: \n");
    scanf("%d", &num1);

    i = 0;
    soma = 0;
    printf("A soma das casas de 1 a %d:\n", num1);
    while (i < num1) {
        i = i + 1;  
        printf("%d", i);  
        soma = soma + i ;
            if (i != num1)
            printf(" + ");         
    }
     
        printf(" = %d\n", soma);
    system("pause");
    return 0;
}