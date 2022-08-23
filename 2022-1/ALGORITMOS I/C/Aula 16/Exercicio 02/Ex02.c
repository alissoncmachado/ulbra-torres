#include <stdio.h>


int main() {
  int i, valor;
  //Atividade A
  int A[6] = {1, 0, 5, -2, -5, 7};

  printf("Exibindo valores da memória:\n");
  
  for(i=0; i < 6; i++) {
    printf("[%d] = %d\n", i, A[i]);
  }

  //Atividade B
  valor = A[0] + A[1] + A[5];
  printf("\nA soma dos valores [%d]+[%d]+[%d] = %d\n\n",A[0], A[1],A[5], valor); 

  //Atividade C
  A[4] = 100;
  //Atividade D

  for(i=0; i < 6; i++) {
    printf("[%d] = %d\n", i, A[i]);
  }

  system("pause");
  return 0;
}