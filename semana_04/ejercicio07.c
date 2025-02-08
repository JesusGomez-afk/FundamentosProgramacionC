#include <stdio.h>
#include <stdlib.h>

int main(){
    float total,descuento;

    printf("Ingrese el valor total de su compra: ");
    scanf("%f",&total);

    if(total > 500){
        descuento = total * 0.20;
        printf("Con su compra de %.0f$ tiene la oportunidad de un descuento de %.1f$ \n",total, descuento);
        printf("Por lo que le quedaria en un total de: %.1f$",total - descuento);
    } else if(total > 200){
        descuento = total * 0.10;
        printf("Con su compra de %.0f$ tiene la oportunidad de un descuento de %.1f$ \n",total, descuento);
        printf("Por lo que le quedaria en un total de: %.1f$",total - descuento);
    } else if(total > 100){
        descuento = total * 0.50;
        printf("Con su compra de %.0f$ tiene la oportunidad de un descuento de %.1f$ \n",total, descuento);
        printf("Por lo que le quedaria en un total de: %.1f$",total - descuento);
    } else if(total <= 100 && total >= 0){
        descuento = total * 0;
        printf("Con su compra de %.0f$ no tiene la oportunidad a recibir un descuento \n",total);
        printf("Por lo que le quedaria en un total de: %.1f$",total - descuento);
    } else{
        puts("Nos debes dinero >:C");
    }

    return 0;
}