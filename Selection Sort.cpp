#include <stdio.h>
#define TAM 10
#include <stdlib.h>
#include<time.h>

// Marcus Paulo Ribeiro Rodrigues Alves - 2010665

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void seletor(int array[], int tamanho) {
  for (int j = 0; j < tamanho - 1; j++) {
    int min_idx = j;
    for (int i = j + 1; i < tamanho; i++) {

      if (array[i] < array[min_idx])
        min_idx = i;
    }

    trocar(&array[min_idx], &array[j]);
  }
}

void printArray(int array[], int tamanho) {
  for (int i = 0; i < tamanho; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
	
  int numeros[TAM];
  
	srand(time(0));
	printf("Numeros Aleatorios:");
	printf("\n");
  	for(int i = 0; i<TAM; i++){
    		int number = rand() % 100;
            printf(" %d ", number );
            numeros[i]= number;
	}
	 printf("\n");
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);
  seletor(numeros, tamanho);
  
  printf("\n");
  printf("Sorted vetor in Acsending Order:\n");
  
  printArray(numeros, tamanho);
}
