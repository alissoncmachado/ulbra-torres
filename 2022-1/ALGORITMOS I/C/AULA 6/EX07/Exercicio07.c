#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, novosalario;
    printf("Informe seu salário: \n");
    scanf("%f", &salario);

    if (salario >= 500) {   
        printf("Você não tem direito a aumento salarial.\n");       
    } else {
        novosalario = salario + (salario * 30/100);    
        printf("Você recebeu aumento de 30%% e seu novo salário é de: R$ %.2f\n", novosalario);       
    }
    system("pause");
    return 0;
}

