/* Efetue um programa que leia a nota de 10 alunos de uma turma. Ao final, deve ser escrita a 
média geral da turma. Esse algoritmo deve ser feito duas vezes uma usando o DO WHILE */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int nota, soma, media, i;
    printf ("Calculadora de média da turma: \n");
    printf ("O valor das notas devem ser informados de 0 a 10: \n");
    soma = 0;
    i = 1;
    // primeiro do para array
    do {  
        //segundo do para leitura correta de nota entre 0 e 10       
        do {
        printf("Informe a nota do aluno %d: \n", i);
        scanf("%d", &nota);
        } while (nota < 0 || nota > 10);
        // fim segundo do
        soma = soma + nota;  
        i++;
    } while (i<=10);
    //fim primeiro do

    media = soma / 10;
    printf("A média de nota dos alunos é de: %d\n", media);

    system("pause");
    return 0;
}