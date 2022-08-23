#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pes, polegadas, jardas, milhas;
    printf("Digige um valor em pes: \n");
    scanf ("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;
    
    printf("A conversão do pes informados é de: %.2f polegadas\n %.2f jardas,\n %.6f milhas.\n" , polegadas, jardas, milhas);
    system("pause");

    return 0;
}
