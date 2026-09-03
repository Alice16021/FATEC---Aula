#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j;
    int maior, lin, col;
    
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    maior = mat[0][0];
    lin = 0;
    col = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                lin = i;
                col = j;
            }
        }
    }

    
    printf("\nMaior valor encontrado: %d\n", maior);
    printf("Localizacao: Linha %d, Coluna %d\n", lin, col);

    return 0;
}
