#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);   
    char nome[30];
    int i, vogal, contador;
    contador = 0;
    vogal = 0;   
    printf ("Digite uma palavra: \n"); 
    scanf("%s", &nome);
    for (i = 0; i < nome[i]; i++) {
        contador++;
        if (nome[i] == 'a' || nome[i] == 'A' || nome[i] == 'e' || nome[i] == 'E'
            || nome[i] == 'i' || nome[i] == 'I' || nome[i] == 'o' || nome[i] == 'O'
            || nome[i] == 'u' || nome[i] == 'U') {
            vogal++;
        }
    }
    printf("A palavra %s tem %d letras\n", nome, contador);
    printf("A palavra %s tem %d vogais\n", nome, vogal);




  system("pause");
  return 0;
}