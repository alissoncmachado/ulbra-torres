#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quantHoras, salMinimo, valorHora, salBruto, imposto, salLiquido;
    printf("Digite a quantidade de horas trabalhadas: \n");
    scanf ("%f", &quantHoras);
    printf("Digite o salário mínimo: \n");
    scanf ("%f", &salMinimo);

    valorHora = salMinimo / 2;
    salBruto = valorHora * quantHoras;
    imposto = salBruto * 3/100;
    salLiquido = salBruto - imposto;

    printf("O salário líquido é de: R$%.2f.\n", salLiquido);
    system("pause");

    return 0;
}
