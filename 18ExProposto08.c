#include <stdio.h>

int encontrarMaior(int matriz[3][3], int *linha, int *coluna) {
    int i, j;
    int maior = matriz[0][0];
    *linha = 0;
    *coluna = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                *linha = i;
                *coluna = j;
            }
        }
    }
    return maior;
}

int main() {
    int mat[3][3];
    int i, j, maiorVal, lin, col;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    maiorVal = encontrarMaior(mat, &lin, &col);

    printf("\n Maior valor encontrado: %d \n", maiorVal);
    printf("Localizacao: Linha %d, Coluna %d \n", lin, col);

    return 0;
}
