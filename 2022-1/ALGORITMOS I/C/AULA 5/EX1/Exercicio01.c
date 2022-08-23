#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2, total;
    printf("Digite um valor: \n");
    scanf("%d", &numero1);
    printf("Digite outro valor: \n");
    scanf("%d", &numero2);

    total = numero1 - numero2;

    printf("%d - %d = %d \n", numero1, numero2, total);
    system("pause");

    return 0;
}

