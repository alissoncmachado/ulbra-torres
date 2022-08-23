#include<stdlib.h>
#include<stdio.h>

int main(){

int i, j;
int num[10];

	for(i  =0; i < 10; i++) {
		printf("Informe um número para casa [%d]: ", i+1);        
		scanf("%d", &num[i]);

		for(j=0;j<i; j++){
		    if(num[i]==num[j]){
			    printf("\nNumero repetido, entre com outro.\n");
			    i--;
		    }
	    }
	}

	for(i=0;i<10;i++){
		printf("Array [%d] = %d\n", i+1, num[i]);
	}
	system("pause");
	return 0;
}