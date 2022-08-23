#include <stdio.h>
#include <time.h>

int main()
{    
    int dia1, dia2, mes1, mes2, ano1, ano2, bissexto1, bissexto2;
    // Informações sobre a primeira data
    printf("Abaixo você irá informar a primeira data:\n");
    printf("Digite o ano da primeira data: \n");
    scanf("%d", &ano1);
    bissexto1 = ano1 % 4;
    do {
        printf("Digite o mês da primeira data: \n");
        scanf("%d", &mes1);   
    } while (mes1 < 1 || mes1 > 12);
    if (mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12) {
        do {
            printf("Digite o dia da primeira data (1 a 31): \n");
            scanf("%d", &dia1);
        } while (dia1 < 1 || dia1 > 31);
    } else if (mes1 == 2) {
            if (bissexto1 == 0){
                do {
                    printf("Digite o dia da primeira data (1 a 29): \n");
                    scanf("%d", &dia1);   
                } while (dia1 < 1 || dia1 > 29);
            } else {
               do {
                    printf("Digite o dia da primeira data (1 a 28): \n");
                    scanf("%d", &dia1);
                } while (dia1 < 1 || dia1 > 28);                                        
            }
    } else {
            do {        
                printf("Digite o dia da primeira data (1 a 30): \n");
                scanf("%d", &dia1);     
            } while (dia1 < 1 || dia1 > 30);        
    }
    printf("\nA data informada foi: %d/%d/%d\n\n", dia1, mes1, ano1);


    // Informações sobre a segunda data
    printf("Abaixo você irá informar a segunda data:\n");
    printf("Digite o ano da segunda data: \n");
    scanf("%d", &ano2);
    bissexto2 = ano2 % 4;
    do {
        printf("Digite o mês da segunda data: \n");
        scanf("%d", &mes2);   
    } while (mes2 < 1 || mes2 > 12);
    if (mes2 == 1 || mes2 == 3 || mes2 == 5 || mes2 == 7 || mes2 == 8 || mes2 == 10 || mes2 == 12) {
        do {
            printf("Digite o dia da segunda data (1 a 31): \n");
            scanf("%d", &dia2);
        } while (dia2 < 1 || dia2 > 31);
    } else if (mes2 == 2) {
            if (bissexto2 == 0){
                do {
                    printf("Digite o dia da segunda data (1 a 29): \n");
                    scanf("%d", &dia2);   
                } while (dia2 < 1 || dia2 > 29);
            } else {
               do {
                    printf("Digite o dia da segunda data (1 a 28): \n");
                    scanf("%d", &dia2);
                } while (dia2 < 1 || dia2 > 28);                                        
            }
    } else {
            do {        
                printf("Digite o dia da segunda data (1 a 30): \n");
                scanf("%d", &dia2);     
            } while (dia2 < 1 || dia2 > 30);        
    }
    printf("\nA data informada foi: %d/%d/%d\n\n", dia2, mes2, ano2);

    if (ano1 > ano2) {
        printf("A maior data é: %d/%d/%d\n", dia1, mes1, ano1);
    } else if (ano2 > ano1){
        printf("A maior data é: %d/%d/%d\n", dia2, mes2, ano2);
    } else if (mes1 > mes2){
        printf("A maior data é: %d/%d/%d\n", dia1, mes1, ano1);
    } else if (mes2 > mes1){
        printf("A maior data é: %d/%d/%d\n", dia2, mes2, ano2);
    } else if (dia1 > dia2){
        printf("A maior data é: %d/%d/%d\n", dia1, mes1, ano1);
    } else if (dia2 > dia1){
        printf("A maior data é: %d/%d/%d\n", dia2, mes2, ano2);
    } else {
        printf("A datas são iguais\n");
    }

     system("pause");
    return 0;
}