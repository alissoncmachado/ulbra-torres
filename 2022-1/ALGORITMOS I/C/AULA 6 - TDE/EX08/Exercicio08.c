#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int opcao;
    float numero1, numero2, total;
    printf("Bem vindo ao MENU, selecione uma opção: \n");
    printf("1 - Somar dois números;\n2 - Raiz quadrada de um número.\n\n");   
    do {
        printf("Selecione uma opção:\n");
        scanf("%d", &opcao);
    } while (opcao != 1 && opcao != 2);
    
    if (opcao == 1) {
        printf("Digite um número: \n");
        scanf("%f", &numero1);
        printf("Digite outro número: \n");
        scanf("%f", &numero2); 
        total = numero1 + numero2;
        printf("A soma de %.2f + %.2f = %.2f\n", numero1, numero2, total);

    } else if (opcao == 2) {
        printf("Digite um número: \n");
        scanf("%f", &numero1);
        total = sqrt(numero1);
        printf("A raiz quadrada de %.2f é: %.2f \n", numero1, total); 
     
    }
    system("pause");
    return 0;
}

