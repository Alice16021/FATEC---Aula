#include <stdio.h>
#include <stdlib.h>

int main() {
	float peso;
	float altura;
	printf("Digite seu peso:");
	scanf("%f", &peso);
	printf("Digite sua altura (em metros): ");
	scanf("%f", &altura);
	float calcularIMC = peso/(altura*altura);
	printf("Seu IMC é: %.2f", calcularIMC);
	
    if (calcularIMC < 18.5) {
        printf("Voce esta abaixo do peso ideal.\n");
    }
    
    else if (calcularIMC <= 24.9) { 
        printf("Voce esta no peso ideal.\n");
    }
    else {
        printf("Voce esta acima do peso ideal.\n");
    }

}
