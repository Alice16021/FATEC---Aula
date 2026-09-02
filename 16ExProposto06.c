#include <stdio.h>

int numeros[10];
int busca;

int procurarElemento() {
    int i;
    for (i = 0; i < 10; i++) {
        if (numeros[i] == busca) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int resultado;
    int i;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite o numero para procurar: ");
    scanf("%d", &busca);

    resultado = procurarElemento();

    if (resultado != -1) {
        printf("Encontrado na posicao: %d\n", resultado);
    } else {
        printf("Numero nao encontrado (%d)\n", resultado);
    }

    return 0;
}
