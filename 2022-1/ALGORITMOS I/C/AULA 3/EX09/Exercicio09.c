#include <stdio.h>
#include <stdlib.h>

int main()
{   float base, altura, area;

    printf("Digite a altura da base em metros: \n");
     scanf("%f", &altura);
    printf("Digite a largura da base em metros: \n");
    scanf("%f", &base);

    area = (altura * base) /2;

    printf("A área da base é de : %.2f metros.\n", area);

    system ("pause");
    return 0;
}
