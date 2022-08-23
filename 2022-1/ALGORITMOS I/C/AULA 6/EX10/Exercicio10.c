#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorCarro, valorFinal;
    printf("Informe o preço de fábrica do veículo: \n");
    scanf("%f", &valorCarro);

    if (valorCarro < 12000 && valorCarro > 3999) {
        valorFinal = valorCarro + (valorCarro * 5/100);    
        printf("Você deve pagar 5%% de taxa. Está livre de impostos, e o preço final é do veículo é de: R$ %.2f\n", valorFinal);       
    } else if (valorCarro >= 12000 && valorCarro < 25000) {
        valorFinal = valorCarro + (valorCarro * 10/100) + (valorCarro * 15/100);    
        printf("Você deve pagar 10%% de taxas, 15%% de impostos, e o preço final é do veículo é de: R$ %.2f\n", valorFinal);       
    } else if (valorCarro >= 25000) {
        valorFinal = valorCarro + (valorCarro * 15/100) + (valorCarro * 20/100);   
        printf("Você deve pagar 15%% de taxas, 20%% de impostos, e o preço final é do veículo é de: R$ %.2f\n", valorFinal);       
    } else {
        printf("Não temos veículos abaixo de R$4000,00.\n");
    }  
    system("pause");
    return 0;
}

