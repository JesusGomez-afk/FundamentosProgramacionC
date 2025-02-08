#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%i",&numero);

    if (numero > 0){
        puts("numero positivo");
    } else if( numero == 0) {
        puts ("El numero es 0");
    } else {
        puts ("numero negativo");
    }
    
    return 0;
}