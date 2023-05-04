#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    int i, j, aux;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int vetor[] = {5, 2, 4, 6, 1, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int i;

    printf("Vetor antes da ordenação:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    bubbleSort(vetor, tamanho);

    printf("\n\nVetor depois da ordenação:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}