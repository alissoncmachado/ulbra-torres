#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite o peso da primeira nota: \n");
    scanf ("%f", &peso1);
    printf("Digite quanto você tirou na primeira nota: \n");
    scanf ("%f", &nota1);
    printf("Digite o peso da segunda nota: \n");
    scanf ("%f", &peso2);
    printf("Digite quanto você tirou na segunda nota: \n");
    scanf ("%f", &nota2);
    printf("Digite o peso da terceira nota: \n");
    scanf ("%f", &peso3);
    printf("Digite quanto você tirou na terceira nota: \n");
    scanf ("%f", &nota3);

    media = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);

    printf("A média ponderada é de: %.2f\n", media);

    system ("pause");
    return 0;
}
