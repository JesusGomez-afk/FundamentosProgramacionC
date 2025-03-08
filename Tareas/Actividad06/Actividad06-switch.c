#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion[1];
    float centigrados, centimetros, millas;

    puts("-------------------------------------");
    puts("a) Convertir grados centigrados a Fahrenheit");
    puts("b) Convertir Centrimetros a Metros");
    puts("c) Convertir Millas a Kilometros");
    puts("-------------------------------------");
    printf("Seleccione una opcion: ");
    scanf("%c", &opcion[0]);
    fflush(stdin);

    while (opcion[0] != 'a' && opcion[0] != 'b' && opcion[0] != 'c')
    {
        system("cls");
        printf("Opcion '%c' invalida\n", opcion[0]);
        puts("-------------------------------------");
        puts("a) Convertir grados centigrados a Fahrenheit");
        puts("b) Convertir Centrimetros a Metros");
        puts("c) Convertir Millas a Kilometros");
        puts("-------------------------------------");
        printf("Seleccione una opcion: ");
        scanf("%c", &opcion[0]);
        fflush(stdin);
    };

    switch (opcion[0])
    {
    case 'a':
        printf("Ingrese un valor en grados centrigrados: ");
        scanf("%f", &centigrados);
        printf("El valor en grados Fahrenheit es: %.2f\n", (centigrados * 59) + 32);
        break;
    case 'b':
        printf("Ingrese un valor en centrimetros: ");
        scanf("%f", &centimetros);
        printf("El valor en Metros es: %.2f\n", (centimetros / 100));
        break;
    case 'c':
        printf("Ingrese un valor en millas: ");
        scanf("%f", &millas);
        printf("El valor en Kilometros es: %.2f\n", (millas * 1.60934));
        break;
    }

    return 0;
}
