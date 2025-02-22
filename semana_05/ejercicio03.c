#include <stdio.h>
#include <stdlib.h>

int main () {
    char calificacion;

    printf("Ingrese tu calificacion en formato USA: ");
    scanf("%c",&calificacion);
    
    switch (calificacion){
        case 'A': case 'a':
            puts("Excelente");
            break;
        case 'B': case 'b':
            puts("muy bien");
            break;
        case 'C': case 'c':
            puts("Bien");
            break;
        case 'D': case 'd':
            puts("Regular");
            break;
        case 'F': case 'f':
            puts("Reprobado");
            break;
        default:
            puts("Error,Calificacion no existe");
            break;
    }

    return 0;
}