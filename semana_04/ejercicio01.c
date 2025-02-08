#include <stdio.h>

int main (){
    float total, descuento;
    
    printf("Ingrese el valor total de compra: ");
    scanf("%f",&total);
    
    if (total >= 100){
        float desc = total*0.05;

        printf("Se aplico un descuento de %.1f\n", desc);
        printf("Total a pagar %.1f\n", total-desc);
    } else {
        puts("Compra no valida para descuento");
        printf("Total a pagar %.1f\n", total);
    }

    return 0;
}