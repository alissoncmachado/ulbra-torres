#include<stdlib.h>
#include<stdio.h>

int main(){

int i, j;
int num[10];

	for(i  =0; i < 10; i++) {
		printf("Informe um número para casa [%d]: ", i+1);        
		scanf("%d", &num[i]);
	}



	for(i=0;i<10;i++){
	    for(j = 0; j < 10; j++){   
            if (num[j] == num[i] && j != i) {     
		        printf("Array [%d] = %d e Array [%d] = %d tem os mesmos valores\n", i+1, num[i], j+1, num[i]);
            }
        }
	}
	system("pause");
	return 0;
}