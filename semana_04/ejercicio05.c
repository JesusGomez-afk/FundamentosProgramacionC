#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia;

    printf("Ingrese un numero entre el 1 y el 7 para representar un dia a la semana: ");
    scanf("%i", &dia);

    if(dia <= 0 || dia > 7){
        puts("Ingreso un un dia invalido");
        exit(0);
    }

    if(dia == 1){
        printf("El dia %i es lunes",dia);
    } else if (dia == 2){
        printf("El dia %i es martes",dia);
    } else if (dia == 3){
        printf("El dia %i es miercoles",dia);
    } else if (dia == 4){
        printf("El dia %i es jueves",dia);
    } else if (dia == 5){
        printf("El dia %i es viernes",dia);
    } else if (dia == 6){
        printf("El dia %i es sabado",dia);
    } else {
        printf("El dia %i es domingo",dia);
    }
    
    return 0;
}