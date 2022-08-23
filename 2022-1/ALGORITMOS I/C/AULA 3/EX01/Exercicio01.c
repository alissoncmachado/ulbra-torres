#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, resultado;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &n3);
    printf("Digite o quarto valor: \n");
    scanf("%d", &n4);

    resultado = n1+n2+n3+n4;

    printf("A soma dos valores digitados é: %d\n", resultado);

    system ("pause");
    return 0;
}
