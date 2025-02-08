#include <stdio.h>

int main(){
    int op;
    float base, altura, area;
    float pesos, dolar = 19.50, resultado;

    puts("1) Calcualr area del triangulo");
    puts("2) Convertir pesos a dolares");
    puts("3) Hola Mundo");
    scanf("%i",&op);
    puts("-------------------------------------------");

    if(op == 1){
        //calcular area del triangulo
        printf("Ingresa la base del triangulo: ");
        scanf("%f",&base);
        printf("Ingresa la altura del triangulo: ");
        scanf("%f",&altura);

        area = (base * altura)/2;

        printf("area: %.2f \n", area);
    }
    if(op == 2){
        //convertir pesos a dolares
        printf("Ingresa la cantidad en pesos: ");
        scanf("%f",&pesos);

        resultado = pesos / dolar;

        printf("Resultado: %.2f \n", resultado);
    }
    if(op == 3){
        //Hola Mundo
        puts("Hola Mundo");
    }

    if(op > 3){
        puts("La opcion no es valia");
    }

    return 0;
}