#include <stdio.h>

void inverteVetor(int vetor[], int tamanho) {
    int i, aux;
    for (i = 0; i < tamanho / 2; i++) {
        aux = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = aux;
    }
}

void imprimeVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int numeros[6] = {10, 20, 30, 40, 50, 60};

    printf("Vetor original: ");
    imprimeVetor(numeros, 6);

    inverteVetor(numeros, 6);

    printf("Vetor invertido: ");
    imprimeVetor(numeros, 6);

    return 0;
}
