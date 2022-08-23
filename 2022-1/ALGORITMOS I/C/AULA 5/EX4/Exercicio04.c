#include <stdio.h>
#include <stdlib.h>

int main(){
    int pesonota;
    float nota1, nota2, media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    pesonota = 2+3;
    media = (nota1*2 + nota2*3) / pesonota;

    printf("A média ponderada é de: %.2f\n", media);
    system("pause");

    return 0;
}

