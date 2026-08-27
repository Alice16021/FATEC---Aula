#include <stdio.h>
#include <stdlib.h>



int main() {
	float ValorDolar;
	printf("Digite a quantia que quer converter:");
	scanf("%f", &ValorDolar);
	
	float converterDolarParaReal= ValorDolar*5.16;
	printf("A conversao ficou R$ %2.f reais", converterDolarParaReal);
	
	return 0;
}
