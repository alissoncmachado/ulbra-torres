/* Elabore um programa que escreva a tabuada do número 9. */
#include <stdio.h>
#include <stdlib.h>

int main () {
    
int i, num;
    i = 0;

    while (i <= 10) {
        num = i * 9;
        printf("9 X %d = %d\n", i, num);
        i++;
    }

    system("pause");
    return 0;
}