#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, novosal, aumento;

    printf("Digite seu salário: \n");
    scanf("%f", &sal);
    aumento = sal * 25/100;
    novosal = sal + aumento;

    printf("Seu aumento foi de 25%% e seu novo salário é: %.2f\n", novosal);

    system ("pause");
    return 0;
}
