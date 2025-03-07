#include <stdio.h>
#include <stdlib.h>

int main () {
    int altura;
    
    printf("Ingrese la altura deseada para el triangulo: ");
    scanf("%i",&altura);

    if(altura > 10 ||altura <= 0){
        puts("altura no valida");
        exit(0);
    }

    //Dibujar trianulo de manera acendente
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < i+1 ; j++) {
            printf("* ");
        }
        puts("");
    }

    //Dibujar el triangulo de manera decendente
    for (int i = altura; i >= 0; i--) {
        for (int j = 0; j < i+1 ; j++) {
            printf("* ");
        }
        puts("");
    }
    
    //Dibujar el triangulo centrado
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < i+1 ; j++) {
            
            for (int p = altura; p > 0; p--){
                printf(" ");
            }

            printf("*");
        }
        puts("");
    }
    return 0;
}