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

    if (numero1 < numero2 && numero1 < numero3) {
        if (numero2 < numero3) {
            printf("A ordem crescente é: %.2f - %.2f - %.2f\n", numero1, numero2, numero3);
        } else {
            printf("A ordem crescente é: %.2f - %.2f - %.2f\n", numero1, numero3, numero2);            
        }
    } else if (numero2 < numero1 && numero2 < numero3) {
        if (numero1 < numero3) {
            printf("A ordem crescente é: %.2f - %.2f - %.2f\n", numero2, numero1, numero3);
        } else {
            printf("A ordem crescente é: %.2f - %.2f - %.2f\n", numero2, numero3, numero1);            
        }
    } else if (numero3 < numero1 && numero3 < numero2) {
        if (numero1 < numero2) {
            printf("A ordem crescente é: %.2f - %.2f - %.2f\n", numero3, numero1, numero2);
        } else {
            printf("A ordem crescente é: %.2f - %.2f - %.2f\n", numero3, numero2, numero1);            
        }
    }
    system("pause");

    return 0;
}

