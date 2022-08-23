#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <windows.h>

int main() {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP (CPAGE_UTF8);

  int i, opcao, count = 0, count2, maior;   
  int valores[100];
    srand(time(NULL));
    for(i = 0; i < 100; i++) {
        valores[i] = rand() % 1000;
        count++; 
        printf("%d\n", valores[i]);
        if (valores [i] == 999) {
          break;
        }
    }

        printf("\n\nSelecione uma das opcoes abaixo: \n");
        printf("1- Exibir valores do array\n");
        printf("2- Imprimir o vetor na ordem inversa\n");
        printf("3- Exibir o maior número\n");
        printf("4- Exibir quantos números foram sorteados\n");    
        printf("5- Encerrar programa\n");   
        while (opcao < 1 || opcao > 5) {
          printf("Informe um valor de 1 a 5\n");           
          scanf("%d", &opcao);
        }           

  switch(opcao) {
      case 1:
        printf("Os valores armazenados na memória do array foram os seguintes: \n");     
        for(i = 0; i < count; i++) {
          if (i == 999) {
            printf(" ");        
          } else {
            printf("%d\n", valores[i]);
          }
        }
      break;
      case 2:
          for (i=100; i > -1; i--) {
            printf("Valor [%d]: %d \n", i, valores[i]);             
          }
      break;
      case 3:
          maior = 0;
          for(i = 0; i < 100; i++) {
            if (valores[i] > maior) { 
              maior = valores[i];
              count2 = i;
            }
          }
      printf("O maior número do array é: array[%d] %d\n", count2, maior);
      break;
      case 4:
          printf("Foram sorteados: %d números\n", count);     
      break;
      case 5:
          printf("Voce encerrou o programa.\n");     
      break;
      default:
        printf("Opção inválida\n"); 
      break;

  }

  system("pause");
  return 0;
}