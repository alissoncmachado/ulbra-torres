#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2,total;
    printf("Digite um primeiro número: \n");
    scanf("%f", &numero1);
    printf("Digite um segundo número: \n");
    scanf("%f", &numero2);

    total = numero1 / numero2;

    printf("%.2f / %.2f = %.2f\n", numero1, numero2, total);
    system("pause");

    return 0;
}

