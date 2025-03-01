#include <stdio.h>
#include <stdlib.h>

int main () {
    char nombre[100];

    printf("Escribe tu numbre: ");
    scanf("%[^\n]", nombre); // para que pueda leer una cadena completa que contenga espacios

    printf("Hola %s\n", nombre);
    
    return 0;
}