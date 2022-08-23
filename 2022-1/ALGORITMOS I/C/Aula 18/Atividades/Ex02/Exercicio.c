#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main () { 
int num[10], i, valor; 

    for (i = 0; i < 10; i++) { 
        num[i] = rand() % 99 +1; 
            printf("%d\n", num[i]);
    } 

    printf("Digite um número de 0 a 100\n");
    scanf("%d", &valor);

    for (i = 0; i < 10; i++) { 
        if (valor == num[i]) {
            printf("O valor informado é encontrado na posição %d\n", i);       
        }
    }
   
    system("pause");
    return 0;
}