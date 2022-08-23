
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, imposto, grat, liquido;

    printf("Digite seu salário: \n");
    scanf("%f", &sal);

    imposto = sal *10/100;
    liquido = sal +50 - imposto;

    printf("Seu salário será de: %.2f\n", liquido);

    system ("pause");
    return 0;
}
