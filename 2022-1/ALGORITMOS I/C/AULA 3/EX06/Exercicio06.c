#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, liquido,grat, imposto;

    printf("Digite seu salário: \n");
    scanf("%f", &sal);

    grat = sal *5/100;
    imposto = sal * 7/100;
    liquido = sal + grat - imposto;

    printf("Seu salário é de: %.2f\n", liquido);

    system("pause");
    return 0;
}
