#include <stdio.h>

int main(){
    float cal1;
    float cal2;
    float cal3;

    float promedio;

    printf("Introduce la primera calificacion: ");
    scanf("%f",&cal1);
    printf("Introduce la segunda calificacion: ");
    scanf("%f",&cal2);
    printf("Introduce la tercera calificacion: ");
    scanf("%f",&cal3);

    promedio = (cal1+cal2+cal3)/3;

    printf("El promedio es: %.2f \n", promedio);
    
    return 0;
}
