#include <stdio.h>
#define TAMANHO 6

void selectionSort(int *vetor) {
  int menor;

  for (int i = 0; i < TAMANHO - 1; i++) {
    menor = i;
    for (int j = i + 1; j < TAMANHO; j++) {
      if (vetor[j] < vetor[menor]) {
        menor = j;
      }
    }

    if (menor != i) {
      int aux = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = aux;
    }
  }
}


int main(){
    int vetor[] = {5, 9, 4, 6, 7, 3};
    printf("Vetor Original: ");

    for(int i=0; i<TAMANHO;i++){
        printf("%d ", vetor[i]);
    }

    selectionSort(vetor);

    printf("\nVetor ordenado: ");

    for(int i=0; i<TAMANHO;i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}