#include <stdio.h>

int main () {
    int edad;

    printf("Ingrese la edad: ");
    scanf("%i", &edad);

    if (edad <12){
        puts("Eres un nino");
    } else if (edad < 17){
        puts("Eres un adolcente");
    } else if (edad < 35){
        puts("Eres un joven");
    } else if (edad < 60){
        puts("Eres un adulto");
    } else {
        puts("Eres 3ra edad");
    }
    
    return 0;
}