#include <stdio.h>

void lerNotas(float notas[], int tamanho) {
	int i;
    for (i = 0; i < tamanho; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float calcularMedia(float notas[], int tamanho) {
    float soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    float turma[5];

    lerNotas(turma, 5);
    float media = calcularMedia(turma, 5);

    printf("A media da turma e: %.2f \n", media);

    return 0;
}
