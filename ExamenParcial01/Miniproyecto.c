#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int num1, num2;
    int factorial = 1;
    enum opciones
    {
        SUMA = 1,
        FACTORIAL = 2,
        PROGRAMACION = 3,
        PROXIMAMENTE = 4,
        SALIR = 0,
    };

    while (1)
    {
        puts("-------------------- MENU --------------------");
        puts("1. Suma de dos numeros");
        puts("2. Factorial de un numero");
        puts("3. Repetir la palabra Programacion n cantidad de veces");
        puts("4. Proximamente");
        puts("0. Salir");
        puts("---------------------------------------------");

        printf("Ingrese una opcion: ");
        scanf("%i", &opcion);

        if (opcion == SALIR)
        {
            puts("Saliendo del programa...");
            break;
        }

        switch (opcion)
        {
        case SUMA:
            system("cls");
            printf("Ingrese el primer numero: ");
            scanf("%i", &num1);
            printf("Ingrese el segundo numero: ");
            scanf("%i", &num2);
            printf("La suma de %i y %i es %i\n", num1, num2, num1 + num2);
            break;
        case FACTORIAL:
            system("cls");
            printf("Ingrese un numero: ");
            scanf("%i", &num1);
            for (int i = 1; i <= num1; i++)
            {
                factorial *= i;
            }
            printf("El factorial de %i es %i\n", num1, factorial);
            break;
        case PROGRAMACION:
            system("cls");
            printf("Ingrese la cantidad de veces que desea repetir la palabra 'Programacion': ");
            scanf("%i", &num1);
            for (int i = 0; i < num1; i++)
            {
                printf("%i.Programacion\n", i + 1);
            }
            break;
        case PROXIMAMENTE:
            system("cls");
            puts("Proximamente...");
            break;
        default:
            system("cls");
            printf("La Opcion %i no es valida\n", opcion);
            break;
        }
    }

    return 0;
}