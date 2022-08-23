#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoFab, percLucro, percImp, totalLucro, totalImp, precoFinal;
    printf("Digite o preço de fábrica: \n");
    scanf ("%f", &precoFab);
    printf("Digite o percentual de lucro: \n");
    scanf ("%f", &percLucro);
    printf("Digite o percentual de imposto: \n");
    scanf ("%f", &percImp);

    totalLucro = precoFab * (percLucro / 100);
    totalImp = precoFab * (percImp / 100);
    precoFinal = precoFab + totalImp + totalLucro;

    printf("A margem de lucro é de: R$ %.2f.\n", totalLucro);
    printf("O valor do imposto é de: R$ %.2f.\n", totalImp);
    printf("O valor total do carro é de: R$ %.2f.\n", precoFinal);
    system("pause");

    return 0;
}
