#include <stdio.h>
#include <stdlib.h>

int main() {
float lado1, lado2, area;
    printf("Informe o valor de um lado do quadrado: \n");	
    scanf("%f", &lado1);
    printf("Informe o valor do outro lado do quadrado: \n");	
    scanf("%f", &lado2);

    area = lado1 * lado2;
    printf("A área do quadrado é de: %.2f\n", area);			

    system("PAUSE");	
    return 0;
}