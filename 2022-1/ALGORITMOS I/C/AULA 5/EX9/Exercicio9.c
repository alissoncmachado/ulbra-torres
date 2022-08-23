#include <stdio.h>
#include <stdlib.h>

int main() {
float baseMenor, baseMaior, altura, area;
    printf("Informe a base menor do trapézio: \n");	
    scanf("%f", &baseMenor);
    printf("Informe a base maior do trapézio: \n");	
    scanf("%f", &baseMaior);
    printf("Informe a altura do trapézio: \n");	
    scanf("%f", &altura);

    area = ((baseMenor + baseMaior) * altura) / 2;
    printf("A área do trapézio é: %.2f\n", area);			

    system("PAUSE");	
    return 0;
}