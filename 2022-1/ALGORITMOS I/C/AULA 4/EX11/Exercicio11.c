#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, quad, cubo;
    double raiz2, raiz3;
    do {
        printf("Digite um valor maior que 0: \n");
        scanf("%d", &num);
    } while (num <=0); 

    quad = pow (num, 2);
    cubo = pow (num, 3);
    raiz2 = sqrt(num);
    raiz3 = cbrt(num);

    printf("O valor de %d elevado ao quadrado é: %d.\n", num, quad);
    printf("O valor de %d elevado ao cubo é: %d.\n", num, cubo);
    printf("A raiz quadrada de %d é: %.2f.\n", num, raiz2);
    printf("A raiz cúbica de %d é: %.2f.\n", num, raiz3);
    system("pause");

    return 0;
}

