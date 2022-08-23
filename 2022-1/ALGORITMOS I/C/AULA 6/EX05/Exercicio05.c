#include <stdio.h>
#include <stdlib.h>

int opcao;
int main(){
    float numero1, numero2, difer, media, divisao, mult;
    printf("Informe um número: \n");
    scanf("%f", &numero1);
    printf("Informe outro número: \n");
    scanf("%f", &numero2);
    printf("Escolha umas das opções abaixo:\n1 - Média entre os números digitados;\n2 - Diferença do maior pelo menor;\n");
    printf("3 - Produto entre os números digitados;\n4 - Divisão do primeiro pelo segundo;\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        media = (numero1 + numero2) / 2;
        printf("A média entre os valores informados é: %.2f.\n", media);
    break;
    case 2:  
        if (numero1 > numero2) {
            difer = numero1 - numero2;
            printf("A diferença dos números é de: %.2f.\n", difer);
        } else if (numero2 > numero1) {
            difer = numero2 - numero1;
            printf("A diferença dos números é de: %.2f.\n", difer);
        } else {
            printf("Os números são iguais.");
        }
    break;
    case 3:
        mult = numero1 * numero2;
        printf("O produto dos dois valores é: %.2f.\n", mult);
    break;
    case 4:
        if (numero2 == 0) {
            printf("O segundo número deve ser diferente de zero.\n");
        } else {
            divisao = numero1 / numero2;
            printf("O primeiro número informado dividido pelo segundo é: %.2f.\n", divisao);
        }  
    break; 
    default:
        printf("Opção inválida, reinicie.\n");
    } 
    system("pause");
    return 0;
}

