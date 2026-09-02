#include <stdio.h>

float somaDiagonalPrincipal(float matriz[4][4]) {
    float soma = 0.0;
    int i;
    for (i = 0; i < 4; i++) {
        soma += matriz[i][i]; // Na diagonal principal, o indice da linha é igual ao da coluna
    }
    return soma;
}

int main() {
    float mat[4][4];
    int i, j;

    printf("Digite os valores reais da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    float resultado = somaDiagonalPrincipal(mat);
    printf("\nA soma da diagonal principal eh: %.2f\n", resultado);

    return 0;
}
