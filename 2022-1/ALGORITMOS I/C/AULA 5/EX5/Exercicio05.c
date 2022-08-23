#include <stdio.h>
#include <stdlib.h>

int main(){
    float precoProd, precoFinal, desconto;
    printf("Informe o valor do produto: \n");
    scanf("%f", &precoProd);

    desconto = precoProd * 10/100;
    precoFinal = precoProd - desconto;

    printf("Com 10%% de desconto o preço final será: %.2f\n", precoFinal);
    system("pause");

    return 0;
}