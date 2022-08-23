#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoSaco, rgato1, rgato2, total;
    printf("Informe quantos quilos de ração vem no saco: \n");
    scanf ("%f", &pesoSaco);
    printf("Informe a quantidade em gramas para o gato 1: \n");
    scanf ("%f", &rgato1);
    printf("Informe a quantidade em gramas para o gato 2: \n");
    scanf ("%f", &rgato2);

    rgato1 = rgato1 / 1000;
    rgato2 = rgato2 / 1000;
    total = pesoSaco - 5 * (rgato1 + rgato2);

    printf("Você terá %.3f gramas de ração após 5 dias alimentando os gatos. \n", total);
    system("pause");

    return 0;
}
