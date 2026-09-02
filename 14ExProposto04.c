#include <stdio.h>

void calcularTotalPedido(float valorReal, float *valorFinal, float *custoFrete) {
    float total = valorReal;

    if (valorReal > 200.0) {
        total = valorReal * 0.90;
    }
    else {
    	total= valorReal;
	}
	
    // Frete
    if (total > 250.0) {
        *custoFrete = 0.0; // Gratis
    } else {
        *custoFrete = 15.00; // Fixo
    }

    *valorFinal = total;
}

int main() {
    float compra = 230.0;
    float final, frete;

    calcularTotalPedido(compra, &final, &frete);

    printf("Valor bruto: R$ %.2f \n", compra);
    printf("Valor final com desconto: R$ %.2f \n", final);
    printf("Frete: R$ %.2f \n", frete);
    printf("Total a pagar: R$ %.2f \n", final + frete);

    return 0;
}
