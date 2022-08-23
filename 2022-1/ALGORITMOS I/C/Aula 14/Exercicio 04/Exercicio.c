/* Ler dois valores inteiros e escrever o resultado da divisão do primeiro pelo segundo. 
Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÁLIDO e 
ser lido um novo valor. Ao final do programa deve ser impressa a seguinte mensagem: 
VOCE DESEJA OUTRO CÁLCULO (S/N).  Se a resposta for S o programa deverá retornar ao começo, 
caso contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos.  */

#include <stdio.h>
#include <stdlib.h>

int main () {
float num1, num2, total;
char opcao;

    printf("Informe dois valores e saiba a divisão do primeiro pelo segundo: \n");

    do {
        printf("Digite um valor: \n");
        scanf("%f", &num1);
        do {
            printf("Digite outro valor: \n");
            scanf("%f", &num2);
            if (num2==0) {
                printf("VALOR INVÁLIDO\n");
            }
        } while (num2 == 0);

        total = num1 / num2;
        printf("A divisão de %.2f / %.2f é de: %.2f \n", num1, num2, total);
        printf("Deseja efetuar novo cálculo? [s/n]\n");
        scanf("%s%*c", &opcao);
    } while ((opcao =='s')||(opcao =='S'));

    system("pause");
    return 0;
}