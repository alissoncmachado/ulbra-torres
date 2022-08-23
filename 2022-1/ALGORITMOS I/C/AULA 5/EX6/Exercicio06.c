#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, valorVendas, comissao, salarioFinal;
    printf("Informe seu salário fixo: \n");
    scanf("%f", &salario);
    printf("Informe quanto você vendeu este mês: \n");
    scanf("%f", &valorVendas);

    comissao = valorVendas * 4/100;
    salarioFinal = salario + comissao;

    printf("Sua comissão este mês foi de: R$ %.2f\n", comissao);
    printf("Este mês você receberá: R$ %.2f\n", salarioFinal);
    system("pause");

    return 0;
}