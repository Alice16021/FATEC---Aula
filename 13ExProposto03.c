#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;;
}

int main() {
    float temperatura1 = 100.0;
    float temperatura2 = 125.5;
    float temperatura3 = 300.0;

    printf("Leitura do sensor de Celsius para Fahrenheit:\n");
    printf("Temp 1: %.2f C = %.2f F\n", temperatura1, celsiusParaFahrenheit(temperatura1));
    printf("Temp 2: %.2f C = %.2f F\n", temperatura2, celsiusParaFahrenheit(temperatura2));
    printf("Temp 3: %.2f C = %.2f F\n", temperatura3, celsiusParaFahrenheit(temperatura3));

    return 0;
}
