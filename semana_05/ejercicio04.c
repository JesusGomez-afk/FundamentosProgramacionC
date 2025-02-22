#include <stdio.h>
#include <stdlib.h>

int main (){
    int op;
    int x, y, resultado;
    float base, altura, area;
    
    puts("1) Hola Mundo");
    puts("2) Sumar");
    puts("3) Area del triangulo");
    printf("Elige la opcion: ");
    scanf("%i",&op);

    switch (op) {
        case 1:
            puts("Hola mundo");
            break;
        case 2:
            printf("Ingrese el primer numero a sumar:");
            scanf("%i",&x);
            printf("Ingrese el segundo numero a sumar:");
            scanf("%i",&y);

            resultado = x + y;

            printf("La suma es: %i\n",resultado);
            break;
        case 3:
            printf("Ingrese la base del triangulo: ");
            scanf("%f",&base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%f",&altura);

            area = (base * altura) / 2;

            printf("El area del triangulo es: %f\n",area);
            break;
        default:
            puts("Error, Opcion no valida");
            break;
    }

    return 0;
}