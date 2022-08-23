#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2, numero3;
    int opcao;
    printf("Você deve informar três números reais diferentes: \n");   
    printf("Informe o primeiro número real: \n");
    scanf("%f", &numero1);
    do {
        printf("Informe o segundo número real: \n");
        scanf("%f", &numero2);
    } while (numero2 == numero1);
    do {
        printf("Informe o terceiro número real: \n");
        scanf("%f", &numero3);
    } while (numero3 == numero1 || numero3 == numero2);

    printf("Agora seleciona uma das opções abaixo: \n");  
    printf("1 - A, B, C em ordem crescente;\n"); 
    printf("2 - A, B, C em ordem decrescente;\n"); 
    printf("3 - O maior fica entre os outros dois números.\n\n");

    do {
        printf("Informe a opção 1, 2 ou 3.\n");     
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 3);

    if (opcao == 1) {
        if (numero1 < numero2 && numero1 < numero3) {
            if (numero2 < numero3) {
                printf("A ordem crescente é: %.2f - %.2f - %.2f \n", numero1, numero2, numero3);
            } else {
                printf("A ordem crescente é: %.2f - %.2f - %.2f \n", numero1, numero3, numero2);
            }
        } else if (numero2 < numero1 && numero2 < numero3) {
            if (numero1 < numero3) {
                printf("A ordem crescente é: %.2f - %.2f - %.2f \n", numero2, numero1, numero3);
            } else {
                printf("A ordem crescente é: %.2f - %.2f - %.2f \n", numero2, numero3, numero1);
            }        
        } else if (numero3 < numero1 && numero3 < numero2) {
            if (numero1 < numero2) {
                printf("A ordem crescente é: %.2f - %.2f - %.2f \n", numero3, numero1, numero2);
            } else {
                printf("A ordem crescente é: %.2f - %.2f - %.2f \n", numero3, numero2, numero1);
            }        
        }
    } else if (opcao == 2) {
        if (numero1 > numero2 && numero1 > numero3) {
            if (numero2 > numero3) {
                printf("A ordem decrescente é: %.2f - %.2f - %.2f \n", numero1, numero2, numero3);
            } else {
                printf("A ordem decrescente é: %.2f - %.2f - %.2f \n", numero1, numero3, numero2);
            }
        } else if (numero2 > numero1 && numero2 > numero3) {
            if (numero1 > numero3) {
                printf("A ordem decrescente é: %.2f - %.2f - %.2f \n", numero2, numero1, numero3);
            } else {
                printf("A ordem decrescente é: %.2f - %.2f - %.2f \n", numero2, numero3, numero1);
            }        
        } else if (numero3 > numero1 && numero3 > numero2) {
            if (numero1 > numero3) {
                printf("A ordem decrescente é: %.2f - %.2f - %.2f \n", numero3, numero1, numero2);
            } else {
                printf("A ordem decrescente é: %.2f - %.2f - %.2f \n", numero3, numero2, numero1);
            }        
        }
    } else if (opcao == 3) {
        if (numero1 > numero2 && numero1 > numero3) {
            printf("A ordem desejada é: %.2f - %.2f - %.2f\n", numero2, numero1, numero3);
        } else if (numero2 > numero1 && numero2 > numero3) {
            printf("A ordem desejada é: %.2f - %.2f - %.2f\n", numero1, numero2, numero3);           
        } else if (numero3 > numero1 && numero3 > numero2) {
            printf("A ordem desejada é: %.2f - %.2f - %.2f\n", numero1, numero3, numero2);           
        }
    }
    system("pause");

    return 0;
}

