#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main () { 
int tab1[10], tab2[10], result[10]; 
int i;

    for (i = 0; i < 10; i++) { 
        printf("Array[A] - Informe um valor para casa %d\n", i+1);
        scanf("%d", &tab1[i]);
    } 
    for (i = 0; i < 10; i++) { 
        printf("Array[B] - Informe um valor para casa %d\n", i+1);
        scanf("%d", &tab2[i]);
    } 

    for (i=0; i < 10; i++) {
        result[i] = tab1[i] + tab2[i];
        printf("Array C [%d] = %d\n", i, result[i]);
    }


    system("pause");
    return 0;
}