#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual, anoNasc, idadeAtual, ano2050;
    printf("Digite o ano atual: \n");
    scanf ("%d", &anoAtual);
    printf("Digite o ano de nascimento: \n");
    scanf ("%d", &anoNasc);

    idadeAtual = anoAtual - anoNasc;
    ano2050 = 2050 - anoNasc;

    printf("Até o final do ano você terá: %d anos.\n", idadeAtual);
    printf("Em 2050 você terá %d anos.\n", ano2050);    
    system("pause");

    return 0;
}
