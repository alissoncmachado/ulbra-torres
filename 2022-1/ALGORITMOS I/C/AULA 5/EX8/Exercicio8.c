#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso;
    int gramas;
    printf("Informe seu peso em quilos: \n");
    scanf("%f", &peso);

    gramas = peso * 1000;

    printf("Você pesa : %d gramas.\n", gramas);
    system("pause");

    return 0;
}