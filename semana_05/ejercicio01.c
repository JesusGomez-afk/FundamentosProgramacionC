#include <stdio.h>
#include <stdlib.h>

int main () {

    int dia;

    printf("Ingresa un valor entre 1 y 7: ");
    scanf("%i",&dia);

    switch(dia){
        case 1:
            puts("Lunes");
            break;
        case 2:
            puts("Martes");
            break;
        case 3:
            puts("Miercoles");
            break;
        case 4:
            puts("Jueves");
            break;
        case 5:
            puts("Viernes");
            break;
        case 6:
            puts("Sabado");
            break;
        case 7:
            puts("Domingo");
            break;
        default:
            puts("Error, ese dia no existe");
            // break;                       
    }

    return 0;
}