#include <stdio.h>

int main () {

    float kilometro;
    float milla = 1.60934;
    float resultado;

    printf("Ingrese la cantidad en kilometros:");
    scanf("%f",&kilometro);

    resultado = kilometro / milla;

    printf("Millas: %.2f \n", resultado);

    return 0;
}