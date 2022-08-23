#include <stdio.h>
#include <stdlib.h>

int main(){
    float trabalho, avaliacao, exame, media;
    do {
        printf("Informe a nota do trabalho: \n");
        scanf("%f", &trabalho);
    } while (trabalho < 0 || trabalho >10);
    do {
        printf("Informe a nota da avaliação: \n");
        scanf("%f", &avaliacao);
    } while (avaliacao < 0 || avaliacao >10);    
    do {
        printf("Informe a nota do exame: \n");
        scanf("%f", &exame);
    } while (exame < 0 || exame >10);   

    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / 10;

    printf("Sua media foi: %.2f\n", media);
    if (media >= 8) { 
        printf("Obteve conceito A!\n");
    } else if (media >= 7 && media < 8) { 
        printf("Obteve conceito B!\n");
    } else if (media >= 6 && media < 7) { 
        printf("Obteve conceito C!\n");
    } else if (media >= 5 && media < 6) { 
        printf("Obteve conceito D!\n");
    } else if (media >= 0 && media < 5) { 
        printf("Obteve conceito E!\n");
    }
    system("pause");
    return 0;
}

