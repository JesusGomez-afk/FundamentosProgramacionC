#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite, contador = 0;

    printf("Ingrese un numero: ");
    scanf("%i", &limite);

    while (contador != limite + 1)
    {
        printf("%i ", contador);
        contador++;
    }

    return 0;
}