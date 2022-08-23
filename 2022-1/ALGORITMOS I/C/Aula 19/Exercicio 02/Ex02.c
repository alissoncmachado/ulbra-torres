#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float nota1[10], nota2[10], media[10];
    char nome[10][20];
    int opcao, nota, posicao, i, contAlunos = 0;
    char novoCad;
    
    do{
        for(int i = 0; i < 10; i++){
            printf("Digite a primeira nota do aluno %d:\n", i+1);
            scanf("%f%*c", &nota1[i]);

            printf("Digite a segunda nota do aluno %d:\n", i+1);
            scanf("%f%*c", &nota2[i]);

            media[i] = (nota1[i] + nota2[i]) / 2;

            printf("Digite o nome do aluno %d:\n",i+1);
            scanf("%s%*c", &nome[i]);

            contAlunos++;

            printf("\n\nDeseja adicionar um novo aluno [S/N]:\n");
            scanf("%s%*c",&novoCad);

            if (novoCad == 'S' || novoCad == 's'){
                continue;
            }else{
                break;
            }
        }
        i++;    
    }while (i == 0);

    do{
        printf("\nQual opção do menu você deseja realizar?\n");
        printf("1 - Buscar todos os aprovados.\n");
        printf("2 - Buscar todos os reprovados.\n");
        printf("3 - Buscar alunos com nota maior que: \n");
        printf("4 - Buscar por matrícula.\n");
        printf("5 - Encerrar programa.\n");
        scanf("%d%*c",&opcao);
        
        switch (opcao){
        case 1:
            printf("Os alunos que foram aprovados:\n");
            for(i = 0; i < contAlunos; i++){
                if (media[i] >= 7){  
                    printf("Aluno [%d] %s com a média %.2f\n",i+1, nome[i], media[i]);
                }
            }
            break;
        case 2:
            printf("Os alunos que foram reprovados:\n");
            for(i = 0; i < contAlunos; i++){
                if(media[i] < 7){  
                    printf("Aluno [%d] %s , com a média: %.2f\n",i+1, nome[i], media[i]);
                }
            }
            break;
        case 3:
            printf("Digite uma nota:\n");
            scanf("%d", &nota);

            printf("Abaixo os alunos que tiraram nova maior que a informada:\n");
            for(i = 0; i < contAlunos; i++){
                if(nota < nota1[i] && nota < nota2[i]){
                    printf("Aluno %s\n", nome[i]);
                    if (nota < nota1[i]) {
                        printf("Nota 1: %.2f\n", nota1[i]);    
                    } else if (nota < nota2[i]) {
                        printf("Nota 2: %.2f\n", nota2[i]);   
                    }
                } else {
                    printf("Nenhum aluno tirou nota maior que a informada.\n");  
                }
            }
            break;
        case 4:
            printf("Foram registrados %d alunos. Digite o número de matrícula:\n", contAlunos);
            scanf("%d%*c", &posicao);

            for(i = 0; i < contAlunos; i++){
                if(posicao == i+1){
                    printf("Aluno: %s, Nota 1: %.2f, Nota 2: %.2f, Média: %.2f\n", nome[i], nota1[i], nota2[i], media[i]);
                }
            }
            break;    
        }
    }while(opcao != 5);
    system("pause");
    return 0;
}