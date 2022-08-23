#include <stdio.h>
#include <stdlib.h>

int main(){
    float saldo, credito;
    printf("Informe seu saldo médio no último ano: \n");
    scanf("%f", &saldo);

    if (saldo < 200 && saldo > 0) {
        credito = saldo * 10/100;    
        printf("Seu saldo é de: R$ %.2f\nE seu limite de crédito é de 10%%: R$ %.2f\n", saldo, credito);       
    } else if (saldo >= 200 && saldo < 300) {
        credito = saldo * 20/100;    
        printf("Seu saldo é de: R$ %.2f\nE seu limite de crédito é de 20%%: R$ %.2f\n", saldo, credito);   
    } else if (saldo >= 300 && saldo < 400) {
        credito = saldo * 25/100;    
        printf("Seu saldo é de: R$ %.2f\nE seu limite de crédito é de 25%%: R$ %.2f\n", saldo, credito);   
    } else if (saldo >= 400) {
        credito = saldo * 30/100;    
        printf("Seu saldo é de: R$ %.2f\nE seu limite de crédito é de 30%%: R$ %.2f\n", saldo, credito);   
    } else {
        printf("Você não tem direito a crédito por estar negativo ou sem saldo.\n");
    }           
    system("pause");
    return 0;
}

