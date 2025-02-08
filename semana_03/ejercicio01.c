#include <stdio.h>

int main () {

    float pesos;
    float dolar = 19.50;
    float resultado;

    printf("Ingrese la cantidad en pesos:");
    scanf("%f",&pesos);

    resultado = pesos / dolar;

    printf("Dolares: %.2f \n", resultado);

    return 0;
}