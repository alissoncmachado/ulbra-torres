#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade, faltaobg, faltafac;
    printf("Informe sua idade: \n");
    scanf("%d", &idade);


    if (idade < 16) { 
        faltaobg = abs(idade - 18);
        faltafac = abs(idade - 16);
        printf("Você é menor de idade.\n");
        printf("Você ainda não tem idade para votar.\nFaltam %d anos para o voto facultativo e %d anos para o voto obrigatório.\n", faltafac, faltaobg);       
    } else if (idade >= 16 && idade < 18) {
        faltafac = abs(idade - 18); 
        printf("Você é menor de idade.\n");
        printf("Você está apto a votar, mas não é obrigatório.\n");  
        printf("Faltam %d anos para você votar de forma obrigatória.\n", faltafac);                
    } else if (idade >= 70) {  
        printf("Você é maior de idade.\n");
        printf("A partir dos 70 anos o voto não é obrigatório, mas você ainda pode votar.\n");       
    } else {
        printf("Você é maior de idade.\n");
        printf("O voto é obrigatório.\n");
    }  
    system("pause");
    return 0;
}
