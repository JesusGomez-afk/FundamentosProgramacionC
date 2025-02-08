#include <stdio.h>
#include <stdlib.h>

int main(){
    int velocidad;

    printf("Ingrese la velocidad de su vehiculo: ");
    scanf("%i",&velocidad);

    if(velocidad >= 120){
        printf("La velocidad de %i km/h es Muy rapida", velocidad);
    } else if (velocidad >= 61){
        printf("La velocidad de %i km/h es Rapida", velocidad);
    } else if (velocidad >= 20){
        printf("La velocidad de %i km/h es Normal", velocidad);
    } else if (velocidad < 20 && velocidad > 0){
        printf("La velocidad de %i km/h es Muy lenta", velocidad);
    } else if (velocidad == 0){
        printf("Estas quieto bro");
    } else{
        printf("Acabas de romper las leyes de la fisica");
    }
    return 0;
}