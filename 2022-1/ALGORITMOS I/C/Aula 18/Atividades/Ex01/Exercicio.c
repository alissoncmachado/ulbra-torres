#include <stdio.h>
/* 1-Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e: 
a) imprima os números do vetor que são maiores que o valor referência 
b) retorne quantos números armazenados no vetor são menores que o valor de referência 
c) retorne quantas vezes o valor de referência aparece no vetor */
int main(){
  int i, referencia, quant, quantIgual;
  int num[10]; 
  quant = 0;
  quantIgual = 0;


    //ler 10 numeros
    for(i = 0; i < 10; i++){
    printf("Informe um valor para posição: %d\n", i+1);    
    scanf("%d",&num[i]);
    }
    //lendo referencia (a)
    printf("Informe outro valor para comparar com os números do array: \n");   
    scanf("%d",&referencia);    
    // comparando vetores com valor da referencia (a)
    for(i = 0; i < 10; i++) {
        if (referencia > num[i]) {
            printf("%d é maior que %d \n", referencia, num[i]);             
        }
    }

    for(i = 0; i < 10; i++) {
        if (num[i] < referencia) {
            quant = quant +1;         
        }
    }

    printf("Existem %d número(s) são menor(es) que %d \n", quant, referencia);

    // contador de numeros igual a referencia (c)
    for(i = 0; i < 10; i++) {
        if (num[i] == referencia) {
            quantIgual = quantIgual +1;             
        }
    }
    //entrega (c)
    if (quantIgual > 0) {
        printf("Existe %d valor de vetor igual a referencia\n", quantIgual);  

    } else {
        printf("Os valores do vetor não são igual a referencia");              
    }


    system("pause");
    return 0;
}