#include <stdio.h>

void gerarTransposta(int A[3][2], int B[2][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            B[j][i] = A[i][j]; // Linha vira coluna e coluna vira linha
        }
    }
}

int main() {
    int A[3][2], B[2][3];
    int i, j;

    printf("Digite os elementos da matriz A (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    gerarTransposta(A, B);

    printf("\n--- Matriz A (3x2) ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Matriz Transposta B (2x3) ---\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
