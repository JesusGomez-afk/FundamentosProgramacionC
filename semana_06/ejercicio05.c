#include <stdio.h>
#include <stdlib.h>

int main () {
    char nombre [] = "Michel";
    nombre[2]='\0';
    puts(nombre);
    printf("%s\n",nombre);
    for ( int i = 0; i < 6; i++ ){
        printf("%c %i\n",nombre[i], nombre[i]);
    }
    return 0;
}