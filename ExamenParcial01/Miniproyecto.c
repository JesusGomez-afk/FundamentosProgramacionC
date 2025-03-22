#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int num1, num2;
    int factorial = 1;
    char password[10];

    enum opciones
    {
        SUMA = 1,
        FACTORIAL = 2,
        PROGRAMACION = 3,
        PASSWORD = 4,
        SALIR = 0,
    };

    while (1)
    {
        puts("-------------------- MENU --------------------");
        puts("1. Suma de dos numeros");
        puts("2. Factorial de un numero");
        puts("3. Repetir la palabra Programacion n cantidad de veces");
        puts("4. Password");
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
        case PASSWORD:
            system("cls");
            printf("Ingrese la cantidad de caracteres en total que tiene su password: ");
            scanf("%i", &num1);

            if (num1 > 10 || num1 < 1)
            {
                puts("El password debe de contener un minimo de 1 caracter y un maximo de 10");
                break;
            }

            puts("Ingrese su password carcacter por caracter");
            for (int i = 0; i < num1; i++)
            {
                printf("Caracter %d: ", i + 1);
                scanf(" %c", &password[i]);
                password[i] = password[i] + 3;
            }

            printf("Password Encriptada: %s \n", password);

            break;

        default:
            system("cls");
            printf("La Opcion %i no es valida\n", opcion);
            break;
        }
    }

    return 0;
}