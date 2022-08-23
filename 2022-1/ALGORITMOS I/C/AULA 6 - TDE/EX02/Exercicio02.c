#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, media, notaExame;
    do {
        printf("Informe a primeira nota: \n");
        scanf("%f", &nota1);
    } while (nota1 < 0 || nota1 >10);
    do {
        printf("Informe a segunda nota: \n");
        scanf("%f", &nota2);
    } while (nota2 < 0 || nota2 >10);    
    do {
        printf("Informe a terceira nota: \n");
        scanf("%f", &nota3);
    } while (nota3 < 0 || nota3 >10);   

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua media foi: %.2f\n", media);
    if (media >= 0 && media < 3) { 
        printf("Reprovado!\n");
    } else if (media >= 3 && media < 7) { 
        printf("Exame!\n");
        notaExame = 12 - media;
        printf("Você precisa tirar %.2f para ser aprovado!\n", notaExame);
    } else if (media >= 7 && media <= 10) { 
        printf("Aprovado!\n");
    }
    system("pause");
    return 0;
}

