#include <stdio.h>

int main() {
    int edad;

    printf("Escribe tu edad: ");
    scanf("%i",&edad);

    if (edad >= 18){
        puts("Ya puedes votar");
    } else {
        puts("Aun no puedes votar");
    }

    return 0;
}
