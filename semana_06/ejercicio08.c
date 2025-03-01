#include <stdio.h>
#include <stdlib.h>

int main () {
    int opcion;
    char nombre[100];
    
    do{
        puts("--------------------");    
        puts("1) Captura tu nombre");    
        puts("2) Mostrar del 0 al 100");    
        puts("3) Mostrar la tabla ASCII");    
        puts("0) SALIR");
        puts("--------------------");    
        puts(" ");    
        printf("Escoge una opcion: ");    
        scanf("%i", &opcion);
        fflush(stdin);
   
        switch(opcion){
            case 1: 
                printf("Ingresa tu nombre: ");
                scanf("%[^\n]", nombre);
                system("cls");
                printf("Hola %s (desde un menu repetitivo)\n", nombre);
                break;
            case 2: 
                system("cls");
                for (int i = 0; i <= 100; i++){
                    printf("%i, ", i);
                }
                puts("");
                break;
            case 3:
                system("cls");
                for (int i = 32; i < 128; i++){
                    printf("%c %i\n", i, i);
                };
                break;
            case 0:
                system("cls");
                puts("Cerrando el programa");
                break;
            default:
                system("cls");
                puts("La opcion no es valida");
        }

    } while(opcion != 0);
    
    return 0;
}