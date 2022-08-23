#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, novosal, porc, aumento;
    printf("Digite o salário atual: \n");
    scanf("%f", &sal);
    printf("Digite a porcentagem de aumento: \n");
    scanf("%f", &porc);

    aumento = sal * porc/100;
    novosal = sal + aumento;

    printf("O novo salário é de: %.2f\n", novosal);

    system ("pause");
    return 0;
}
