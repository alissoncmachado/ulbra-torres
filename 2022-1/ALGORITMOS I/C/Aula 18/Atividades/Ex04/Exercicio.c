#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main () { 
float num[5]; 
int i, opcao;

    for (i = 0; i < 5; i++) { 
        printf("Informe um valor para casa %d\n", i+1);
        scanf("%f", &num[i]);
    } 
inicio:
    printf("0 - Para finalizar o programa\n"); 
    printf("1 - Para mostrar os vetores em ordem direta\n");
    printf("2 - Para mostrar os vetores em ordem inversa\n"); 
    scanf("%d", &opcao);   

    switch (opcao) {
    case 1:
        for (i=0; i<5; i++) {
            printf("Valor [%d]: %.2f \n", i, num[i]);            
        }
    goto inicio;     
    break;
    case 2:
        for (i=4; i > -1; i--) {
            printf("Valor [%d]: %.2f \n", i, num[i]);             
        }
    goto inicio;         
    break;
    case 0:
    printf("Você encerrou o sistema\n"); 
    break;        
    default:
        printf("Opção inválida\n");   
    goto inicio;          
    break;
    } 


    system("pause");
    return 0;
}