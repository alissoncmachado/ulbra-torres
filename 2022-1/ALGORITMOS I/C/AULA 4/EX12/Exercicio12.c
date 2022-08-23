#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, respo1, respo2;
    do {
        printf("Digite um número maior que zero: \n");
        scanf ("%d", &num1);
    } while (num1 <=0); 
     
    do {
        printf("Digite outro número maior que zero: \n");
        scanf ("%d", &num2);
    } while (num2 <=0);  

    respo1 = pow (num1, num2);
    respo2 = pow (num2, num1);

    printf("O número %d elevado a %d é: %d\n", num1, num2, respo1);
    printf("O número %d elevado a %d é: %d\n", num2, num1, respo2);
    system("pause");

    return 0;
}
