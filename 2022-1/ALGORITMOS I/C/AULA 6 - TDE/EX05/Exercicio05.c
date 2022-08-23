#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2, numero3, numero4;
    printf("Você deve digitar três valores ordenados, e o quarto valor fora de ordem: \n");
    printf("Lembrando que: caso você repita um dos três valores iguais ou fora de ordem, \no programa fará a leitura do valor novamente: \n\n");
    printf("Informe o primeiro número: \n");
    scanf("%f", &numero1);
    do {
        printf("Informe o segundo número: \n");
        scanf("%f", &numero2);
    } while (numero2 <= numero1);
    do {
        printf("Informe o terceiro número: \n");
        scanf("%f", &numero3);
    } while (numero3 <= numero2);
    printf("Informe o quarto número (desordenado): \n");
    scanf("%f", &numero4);

    if (numero4 > numero3) {
        printf("A ordem decrescente é: %.2f - %.2f - %.2f - %.2f.\n", numero4, numero3, numero2, numero1);
    } else if (numero4 > numero2 && numero4 < numero3) {
        printf("A ordem decrescente é: %.2f - %.2f - %.2f - %.2f.\n", numero3, numero4, numero2, numero1);
    } else if (numero4 > numero1 && numero4 < numero2) {
        printf("A ordem decrescente é: %.2f - %.2f - %.2f - %.2f.\n", numero3, numero2, numero4, numero1);
    } else if (numero4 < numero1) {
       printf("A ordem decrescente é: %.2f - %.2f - %.2f - %.2f.\n", numero3, numero2, numero1, numero4);        
    }

    system("pause");

    return 0;
}

