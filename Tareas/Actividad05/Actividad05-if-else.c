#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad;

    puts("------------------------");
    puts("CLASIFICACION DE ATLETAS");
    puts("------------------------");
    printf("Ingrese la edad del Atleta: ");
    scanf("%i",&edad);

    if (edad <= 0){
        puts("Edad no valida para clasificar");
        exit(0);
    }
    
    if (edad >=1 && edad <12){
        puts("CLASIFICACION: `Infantil`");
    } else if (edad >=12 && edad <=17){
        puts("CLASIFICACION: `Juvenil`");
    } else if (edad >=18 && edad <=39){
        puts("CLASIFICACION: `Adulto`");
    } else if (edad >=40){
        puts("CLASIFICACION: `Master`");
    }
    
    return 0;
}