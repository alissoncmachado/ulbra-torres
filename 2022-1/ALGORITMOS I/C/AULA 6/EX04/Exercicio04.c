#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2, numero3;
    printf("Informe um número: \n");
    scanf("%f", &numero1);
    printf("Informe outro número: \n");
    scanf("%f", &numero2);
    printf("Informe outro número: \n");
    scanf("%f", &numero3);

    if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
        printf("Você deve informar 3 valores diferentes, reinicie. \n");       
    } else if (numero1 > numero2 && numero1 > numero3) {
        printf("O maior número é: %.2f \n", numero1);
    } else if (numero2 > numero1 && numero2 > numero3) {
        printf("O maior número é: %.2f \n", numero2);     
    } else if (numero3 > numero1 && numero3 > numero2) {
        printf("O maior número é: %.2f \n", numero3); 
    }
    system("pause");
    return 0;
}

