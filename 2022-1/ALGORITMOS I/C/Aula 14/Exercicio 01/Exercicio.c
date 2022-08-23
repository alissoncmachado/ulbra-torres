/* Faça um algoritmo que leia a nota de vários alunos de uma turma. Ao final, deve ser escrita 
a média geral da turma. A leitura das médias somente encerra quando uma nota negativa for digitada. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int numAluno;
    float nota, somaNota, media;
    printf ("Calculadora de média da turma: \n");
    printf ("O valor das notas devem ser informados de 0 a 10: \n");
    printf ("Informe um valor negativo para calcular a média: \n");
    somaNota = 0;
    numAluno = 1;

    do {  
        printf ("Informe a nota do aluno: %d \n", numAluno);    
        scanf("%f", &nota); 
        if (nota > 0 && nota <=10) {
            somaNota = somaNota + nota;  
            numAluno++;
        } else {
            numAluno--;
        }
    } while (nota > 0 && nota <=10);


    media = somaNota / numAluno;
    printf("O número de alunos na turma é de: %d alunos.\n", numAluno);
    printf("A nota total da turma é de: %.2f\n", somaNota);
    printf("A média dos alunos é de: %.2f\n", media);

    system("pause");
    return 0;
}