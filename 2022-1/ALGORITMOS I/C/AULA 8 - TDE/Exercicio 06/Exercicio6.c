/* Faça um programa para ler três valores quaisquer e escrever o maior dos 3. */
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3;
    printf("Informe o primeiro número: \n");
    scanf("%d", &num1);
    printf("Informe o segundo número: \n");
    scanf("%d", &num2);
    printf("Informe o terceiro número: \n");
    scanf("%d", &num3);

    if (num1 > num2 && num1> num3){
        printf("O primeiro valor é o maior dos três números: %d \n", num1);
    } else if (num2 > num1 && num2 > num3){
        printf("O segundo valor é o maior dos três números: %d \n", num2);
    } else if (num3 > num1 && num3 > num2){
        printf("O terceiro valor é o maior dos três números: %d \n", num3);
    } else {
        printf("Dois dos três números tem o mesmo valor.\n");
    }

    system("pause");
    return 0;
}
