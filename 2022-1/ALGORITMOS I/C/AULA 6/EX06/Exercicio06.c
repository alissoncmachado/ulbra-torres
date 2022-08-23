#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int opcao;
int main(){
    float numero1, numero2, result, result2;
    printf("Informe um número: \n");
    scanf("%f", &numero1);
    printf("Informe outro número: \n");
    scanf("%f", &numero2);
    printf("Escolha umas das opções abaixo:\n1 - O primeiro número elevado ao segundo número;\n2 - Raiz quadrada de cada um dos números;\n");
    printf("3 - Raiz cúbica de cada um dos números;\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        result = pow(numero1, numero2);
        printf("O primeiro número, elevado ao segundo é: %.2f.\n", result);
    break;
    case 2:  
        result = sqrt(numero1);
        result2 = sqrt(numero2);        
        printf("A raiz quadrada do primeiro número é: %.2f.\n", result);
        printf("A raiz quadrada do segundo número é:  %.2f.\n", result2);        
    break;
    case 3:
        result = cbrt(numero1);
        result2 = cbrt(numero2);        
        printf("A raiz cúbica do primeiro número é: %.2f.\n", result);
        printf("A raiz cúbica do segundo número é:  %.2f.\n", result2);  
    break;
    default:
        printf("Opção inválida, reinicie.\n");
    } 
    system("pause");
    return 0;
}

