#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, novosal;

    printf("Digite seu salário: \n");
    scanf("%f", &sal);

    novosal = sal + sal * 25/100;

    printf("Seu aumento foi de 25%% e seu novo salário é: %.2f\n", novosal);

    system ("pause");
    return 0;
}
