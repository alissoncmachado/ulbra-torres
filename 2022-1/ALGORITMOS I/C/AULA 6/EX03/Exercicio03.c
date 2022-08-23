#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2;
    printf("Informe um número: \n");
    scanf("%f", &numero1);
    printf("Informe outro número: \n");
    scanf("%f", &numero2);

    if (numero1 < numero2) { 
        printf("O número %.2f é menor.\n", numero1);
    } else if (numero2 < numero1){
        printf("O número %.2f é menor.\n", numero2);
    } else {
         printf("Os números são iguais!\n");       
    }
    system("pause");

    return 0;
}

