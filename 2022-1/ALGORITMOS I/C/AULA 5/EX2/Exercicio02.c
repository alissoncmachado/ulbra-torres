#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2, numero3, result1, total;
    printf("Digite um primeiro número: \n");
    scanf("%d", &numero1);
    printf("Digite um segundo número: \n");
    scanf("%d", &numero2);
    printf("Digite um terceiro número: \n");
    scanf("%d", &numero3);

    result1 = numero1 * numero2;
    total = result1 * numero3;

    printf("\n%d x %d = %d \n%d x %d = %d\n", numero1, numero2, result1, result1, numero3, total);
    system("pause");

    return 0;
}

