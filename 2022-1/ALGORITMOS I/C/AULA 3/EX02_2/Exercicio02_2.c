#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media, soma;

    printf("Digite a primeira nota: \n");
    scanf ("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf ("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf ("%f", &nota3);

    soma = nota1 + nota2 + nota3;
    media = soma/3;

    printf("A média das notas é de: %.2f\n", media);

    system ("pause");
    return 0;
}
