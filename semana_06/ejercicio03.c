#include <stdio.h>
#include <stdlib.h>

int main (){
    char c = ' '; // el espacio es el valor 32
    int valor = 32;

    while(c <= 'z'){ // la @ es el valor 64
        printf("%i:%c\n", valor, c);
        valor++;
        c++;
    }
    
    return 0;
}