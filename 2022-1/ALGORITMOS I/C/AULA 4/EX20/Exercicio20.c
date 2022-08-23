#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float angulo, altura, escada, radiano;
    printf("Informe o ângulo da escada: \n");
    scanf ("%f", &angulo);
    printf("Digite a altura da parede em metros: \n");
    scanf ("%f", &altura);

    radiano = angulo * 3.14 / 180;
    escada = altura / sin(radiano);

    printf("A medida da escada é de: %.2f metros. \n", escada);
    system("pause");

    return 0;
}