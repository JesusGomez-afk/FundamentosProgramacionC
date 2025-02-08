#include <stdio.h>
#include <stdlib.h>

int main(){
    int calificacion;

    printf("Ingrese la calificacion obtenida: ");
    scanf("%i",&calificacion);

    if (calificacion > 100 || calificacion < 0){
        puts("Calificacion no valida");
        exit(0);
    }

    if(calificacion > 90 && calificacion <= 100){
        puts("Excelente");
    } else if(calificacion > 80 && calificacion <= 90){
        puts("Muy Bien");
    } else if(calificacion > 70 && calificacion <= 80){
        puts("Bien");
    } else if(calificacion >= 60 && calificacion <= 70){
        puts("Panzaste");
    } else {
        puts("Reprobaste");
    }
    
    return 0;
}