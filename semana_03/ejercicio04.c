#include <stdio.h>

int main() {
    int entero;

    printf("Escribe un valor entero: ");
    scanf("%i",&entero);

    if (entero % 2 == 0){
        printf("El numero  %i es par \n", entero);
    } else {
        printf("El numero %i es impar \n", entero);
    }

    return 0;
}