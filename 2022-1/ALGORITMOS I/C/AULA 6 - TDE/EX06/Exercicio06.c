#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, resto;
    printf("Informe um número inteiro: \n");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 0) {
        printf("O número informado é: PAR\n");
    } else {
        printf("O número informado é: IMPAR\n");
    }

    system("pause");

    return 0;
}

