#include <stdio.h>
#include <stdlib.h>

int main(){
    int temperatura;

    printf("Ingrese la temperatura actual: ");
    scanf("%i",&temperatura);

    if (temperatura > 32)
    {
        puts("Hace Mucho calor");
    } else if ( temperatura > 25 && temperatura <= 32){
        puts("Hace Calor");
    } else if ( temperatura > 18 && temperatura <= 25){
        puts("Esta templado");
    } else if ( temperatura > 10 && temperatura <= 18){
        puts("Esta Fresco");
    } else if ( temperatura > 10 && temperatura <= 10){
        puts("Hace Frio");
    } else {
        puts("Esta Helado");
    }
    
    return 0;
}