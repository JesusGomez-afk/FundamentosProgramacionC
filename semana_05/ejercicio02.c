#include <stdio.h>
#include <stdlib.h>

int main () {
    
    enum Dias {
        LUNES = 1,
        MARTES = 2,
        MIERCOLES = 3,
        JUEVES = 4,
        VIERNES = 5,
        SABADO = 6,
        DOMINGO = 7,
    };
    
    int dia;
    printf("Ingresa un valor entre 1 y 7: ");
    scanf("%i",&dia);

    switch(dia){
        case LUNES:
            puts("Lunes");
            break;
        case MARTES:
            puts("Martes");
            break;
        case MIERCOLES:
            puts("Miercoles");
            break;
        case JUEVES:
            puts("Jueves");
            break;
        case VIERNES:
            puts("Viernes");
            break;
        case SABADO:
            puts("Sabado");
            break;
        case DOMINGO:
            puts("Domingo");
            break;
        default:
            puts("Error, ese dia no existe");
            // break;                       
    }
    
    return 0;
}