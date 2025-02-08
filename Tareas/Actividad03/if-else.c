#include <stdio.h>

int main(){
    int calificacion;

    puts("Calificacion Obtenida: ");
    scanf("%i", &calificacion);

    if(calificacion >= 60){
        puts("Aprobaste la materia! :D");
    } else {
        puts("No aprobaste la materia :c");
    }
    
    return 0;
}