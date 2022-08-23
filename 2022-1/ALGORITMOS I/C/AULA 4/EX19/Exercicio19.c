#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altDegrau, altPessoa;
    int quantDegraus;
    printf("Informe a altura do degrau em metros: \n");
    scanf ("%f", &altDegrau);
    printf("Informe a altura que você deseja chegar em metros: \n");
    scanf ("%f", &altPessoa);

    quantDegraus = altPessoa / altDegrau;

    printf("Você deverá subir %d degraus. \n", quantDegraus);
    system("pause");

    return 0;
}
