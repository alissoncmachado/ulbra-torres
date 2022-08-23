#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
    printf("Digite o salário depositado: \n");
    scanf ("%f", &salario);
    printf("Digite o valor do primeiro cheque: \n");
    scanf ("%f", &cheque1);
    printf("Digite o valor do segundo cheque: \n");
    scanf ("%f", &cheque2);

    cpmf1 = cheque1 * 0.38 / 100;
    cpmf2 = cheque2 * 0.38 / 100;
    saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;

    printf("O saldo atual é de: R$%.2f.\n", saldo);
    system("pause");

    return 0;
}
