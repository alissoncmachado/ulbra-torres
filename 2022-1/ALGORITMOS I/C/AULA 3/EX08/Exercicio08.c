#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposito, taxa, rendimento, total;
    printf("Digite o valor do depósito: \n");
    scanf("%f", &deposito);
    printf("Digite a porcentagem da taxa: \n");
    scanf("%f", &taxa);

    rendimento = deposito * taxa/100;
    total = deposito + rendimento;

    printf("O seu rendimento foi de: %.2f\n", rendimento);
    printf("O seu valor total é de: %.2f\n", total);

    system ("pause");
    return 0;
}
