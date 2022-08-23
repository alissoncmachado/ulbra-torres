#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, novosalario;
    printf("Informe seu salário: \n");
    scanf("%f", &salario);

    if (salario <= 300) {
        novosalario = salario + (salario * 35/100);    
        printf("Você recebeu aumento de 35%% e seu novo salário é de: R$ %.2f\n", novosalario);       
    } else {
        novosalario = salario + (salario * 15/100);    
        printf("Você recebeu aumento de 15%% e seu novo salário é de: R$ %.2f\n", novosalario);       
    }
    system("pause");
    return 0;
}

