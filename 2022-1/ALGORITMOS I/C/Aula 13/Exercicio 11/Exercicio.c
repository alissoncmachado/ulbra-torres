/* Faça um programa que leia a matrícula, o nome e as três notas de 10 alunos, e indique para cada aluno, se ele foi aprovado ou não. */
#include <stdio.h>
#include <stdlib.h>

int main () {
    
int matricula;
float nota, soma, media;
    printf("Calculadora de média: \n");

    for (int i = 1;i <=10;i++) {
        printf("Informe o número de matrícula do aluno %d: \n", i);
        scanf("%d", &matricula);
        soma = 0;
        nota = 0;
            for (int countnota = 1; countnota <=3; countnota++) {
                do { 
                    printf("Informe a %dº nota do aluno (0 a 10): \n", countnota);
                    scanf("%f", &nota);
                } while (nota >10 || nota < 0);
                soma = soma + nota;
            }

        media = soma / 3;
        printf("O aluno %d de matrícula %d obteve a média: %.2f\n", i, matricula, media);
            if (media >=7) {
                printf("O Aluno foi aprovado\n\n");
            } else {
                printf("O Aluno foi reprovado\n\n");
            }
    }

    printf("Fim do algoritmo\n");
    system("pause");
    return 0;
}