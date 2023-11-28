#include <stdio.h>
#define TAMANHO 5

void bubbleSort(int *vetor){
    int troquei;
    int aux;

    do{
        troquei = 0;
        for(int i = 0; i<TAMANHO - 1; i++){
            if(vetor[i]>vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                troquei = 1;    //se entrou no if significa que houve a troca
            }
        }

    } while(troquei);
}



int main(){
    int vetor[] = {12,2,5,7,1};
    printf("Vetor Original: ");

    for(int i=0; i<TAMANHO;i++){
        printf("%d ", vetor[i]);
    }

    bubbleSort(vetor);

    printf("\nVetor ordenado: ");

    for(int i=0; i<TAMANHO;i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}

// #include <stdio.h>

// void bubbleSort(int *vetor, int tamanho) {
//     int troca, i, aux;

//     do {
//         troca = 0;
//         for (i = 0; i < tamanho - 1; i++) {
//             if (vetor[i] > vetor[i + 1]) {
//                 // Troca os elementos se estiverem fora de ordem
//                 aux = vetor[i];
//                 vetor[i] = vetor[i + 1];
//                 vetor[i + 1] = aux;
//                 troca = 1; // Indica que houve uma troca nesta passagem
//             }
//         }
//     } while (troca); // Repete o processo enquanto houver trocas
// }

// int main() {
//     int vetor[] = {64, 25, 12, 22, 11};
//     int tamanho = sizeof(vetor) / sizeof(vetor[0]);

//     printf("Vetor original: ");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", vetor[i]);
//     }

//     // Chamar a função de ordenação bubbleSort
//     bubbleSort(vetor, tamanho);

//     printf("\nVetor ordenado: ");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", vetor[i]);
//     }

//     return 0;
// }
