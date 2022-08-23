#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, media;
    printf("Informe a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua media foi: %.2f\n", media);
    if (media < 4) { 
        printf("Você reprovou!\n");
    } else if (media >= 4 && media <7){
        printf("Você está em exame!\n");
    } else {
         printf("Você está aprovado!\n");       
    }
    system("pause");

    return 0;
}

