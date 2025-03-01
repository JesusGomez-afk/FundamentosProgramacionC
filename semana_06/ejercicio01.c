#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont =0;

    while (1) {
        printf("%i\n", cont);
        cont++;
        if (cont > 100){
            break;
        }
    }
    
    return 0;
}