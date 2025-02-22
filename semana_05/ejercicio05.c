#include <stdio.h>
#include <stdlib.h>

int main (){
    enum Meses {
        ENERO = 1,
        FEBRERO = 2,
        MARZO = 3,
        ABRIL = 4,
        MAYO = 5,
        JUNIO = 6,
        JULIO = 7,
        AGOSTO = 8,
        SEPTIEMBRE = 9,
        OCTUBRE = 10,
        NOVIEMBRE = 11,
        DICIEMBRE = 12,
    };
    
    int mes, dia;

    printf("Ingrese el mes: ");
    scanf("%i",&mes);

    switch(mes){
        case ENERO: //case "Enero": case "ENERO": case "enero":
            puts("Se encuentra en Invierno");
            break;

        case FEBRERO: //case "Febrero": case "FEBRERO": case "febrero":
            puts("Se encuentra en Invierno");
            break;

        case MARZO: //case "Febrero": case "FEBRERO": case "febrero":
            printf("Ingrese el dia: ");
            scanf("%i",&dia);

            if(dia < 21){
            puts("Se encuentra en Invierno");
            } else {
            puts("Se encuentra en Primavera");
            }
            break;

        case ABRIL: //case "Febrero": case "FEBRERO": case "febrero":
            puts("Se encuentra en Primavera");
            break;

        case MAYO: //case "Febrero": case "FEBRERO": case "febrero":
            puts("Se encuentra en Primavera");
            break;

        case JUNIO: //case "Febrero": case "FEBRERO": case "febrero":
            printf("Ingrese el dia: ");
            scanf("%i",&dia);

            if(dia < 21){
            puts("Se encuentra en Primavera");
            } else {
            puts("Se encuentra en Verano");
            }
            break;

            case JULIO: //case "Febrero": case "FEBRERO": case "febrero":
            puts("Se encuentra en Verano");
            break;

            case AGOSTO: //case "Febrero": case "FEBRERO": case "febrero":
            puts("Se encuentra en Verano");
            break;

            case SEPTIEMBRE: //case "Febrero": case "FEBRERO": case "febrero":
            printf("Ingrese el dia: ");
            scanf("%i",&dia);

            if(dia < 21){
            puts("Se encuentra en Verano");
            } else {
            puts("Se encuentra en Otoño");
            }
            break;
            
            case OCTUBRE: //case "Febrero": case "FEBRERO": case "febrero":
            puts("Se encuentra en Otoño");
            break;

            case NOVIEMBRE: //case "Febrero": case "FEBRERO": case "febrero":
            puts("Se encuentra en Otoño");
            break;

            case DICIEMBRE: //case "Febrero": case "FEBRERO": case "febrero":
            printf("Ingrese el dia: ");
            scanf("%i",&dia);

            if(dia < 21){
            puts("Se encuentra en Otoño");
            } else {
            puts("Se encuentra en Invierno");
            }
            break;
    }
    
    return 0;
}