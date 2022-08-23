#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, engordar, emagrecer;
    printf("Informe seu peso em quilos: \n");
    scanf("%f", &peso);

    engordar = peso + (peso * 15 /100);
    emagrecer = peso - (peso * 20 /100);

    printf("Se você engordar 15%%, pesará: %.3f Kgs\n", engordar);
    printf("Se você emagrecer 20%%, pesará:  %.3f Kgs\n", emagrecer);
    system("pause");

    return 0;
}