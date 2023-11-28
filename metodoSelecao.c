#include <stdio.h>

//pode sim vc usar um vetor conchete na main e depois
//quando passar por parametro utilizar um asterisco desde
// que nao utilize um tamanho pré definido no vetor
void metodoSelecao(int *vetor, int tamanho) {
    int x, y, aux;
    for (x = 0; x < tamanho - 1; x++)
        for (y = x + 1; y < tamanho; y++)
            if (vetor[x] > vetor[y]) {
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
}

int main() {
    int vetor[] = {64, 25, 12, 22, 11};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Chamar a função de ordenação metodoSelecao
    metodoSelecao(vetor, tamanho);

    printf("\nVetor ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
