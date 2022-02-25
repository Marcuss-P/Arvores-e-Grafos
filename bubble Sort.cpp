#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
#include<time.h>

// Marcus Paulo Ribeiro Rodrigues Alves - 2010665

int main(){
	
	setlocale(LC_ALL, "");
	int numeros[TAM];
	int i, j, aux, contador, n, x;
	
	srand(time(0));
 
 	printf("Ordem atual dos itens no array: \n");
 		
    for(int i = 0; i<TAM; i++){
    		int number = rand() % 100;
            printf(" %d ", number );
            numeros[i]= number;
	}
	

	
	for (i=0; i<TAM; i++){
		for (j=0; j<TAM; j++){
			if(numeros[i]<numeros[j]){
            	int temp = numeros[i];
           		numeros[i]=numeros[j];
            	numeros[j] = temp;
     		}
		}
	}
	
	printf("\n\n\n\n\n Maior no final:\n");
	
		for(int i=0;i<TAM;i++)
			printf("%4d", numeros[i]);
}

