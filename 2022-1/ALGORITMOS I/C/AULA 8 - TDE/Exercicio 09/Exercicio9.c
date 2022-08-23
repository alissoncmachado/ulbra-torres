#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, media;

        printf("Informe a nota da primeira prova: \n");
        scanf("%f", &nota1);

        printf("Informe a nota da segunda prova: \n");
        scanf("%f", &nota2);

        printf("Informe a nota da terceira prova: \n");
        scanf("%f", &nota3);


    media = (nota1 + nota2 + nota3) / 3;


    printf("Sua nota da primeira prova: %.2f \n", nota1);
    printf("Sua nota da segunda prova: %.2f \n", nota2);
    printf("Sua nota da terceira prova: %.2f \n", nota3);
    printf("Sua média foi: %.2f\n", media);

    if (media >= 9) { 
        printf("Obteve conceito A!\n");
    } else if (media >= 7.5 && media < 9) { 
        printf("Obteve conceito B!\n");
    } else if (media >= 6 && media < 7.5) { 
        printf("Obteve conceito C!\n");
    } else if (media >= 4 && media < 6) {
        printf("Obteve conceito D!\n");
    } else if (media >= 0 && media < 4) { 
        printf("Obteve conceito E!\n");
    }

    if (media >= 6) { 
        printf("Você está aprovado!\n");
    } else { 
        printf("Você reprovou!\n");
    }

    system("pause");
    return 0;
}

