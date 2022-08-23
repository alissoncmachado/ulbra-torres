/* Elabore um programa que calcule e escreva a soma de 10 números lidos.Esse algorimo 
deve ser feito três vezes uma usando o FOR */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, resultado;
    resultado = 0;
    for (int i=1; i<=10;i++) {
        printf("Informe o número %d:\n", i);
        scanf("%d", &numero);
        resultado = resultado+ numero;
    }

    printf("A soma dos números informados é de %d\n", resultado);   
    system("pause");
    return 0;
}
