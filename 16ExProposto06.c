#include <stdio.h>

int procurarElemento(int vetor[], int tamanho, int X) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == X) {
            return i; // Retorna a posição (índice) da primeira ocorrência
        }
    }
    return -1; // Se percorrer tudo e não achar
}

int main() {
    int numeros[10];
    int busca;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite o valor X que deseja procurar: ");
    scanf("%d", &busca);

    int resultado = procurarElemento(numeros, 10, busca);

    if (resultado != -1) {
        printf("O numero %d foi encontrado na posicao (indice) %d.\n", busca, resultado);
    } else {
        printf("Resultado: %d (O numero %d nao foi encontrado no vetor).\n", resultado, busca);
    }

    return 0;
}
