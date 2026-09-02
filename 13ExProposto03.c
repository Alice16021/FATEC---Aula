#include <stdio.h>


float celsiusParaFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}


int main() {
    float temp1 = 100.0, temp2 = 125.5, temp3 = 300.0;

    printf("Leitura do sensor de Celsius para Fahrenheit \n");
    printf("Temp 1: %.2f C = %.2f F\n", temp1, celsiusParaFahrenheit(temp1));
    printf("Temp 2: %.2f C = %.2f F\n", temp2, celsiusParaFahrenheit(temp2));
    printf("Temp 3: %.2f C = %.2f F\n", temp3, celsiusParaFahrenheit(temp3));

    return 0;
}
