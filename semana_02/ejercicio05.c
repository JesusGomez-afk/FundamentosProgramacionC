#include<stdio.h>

int main(){
    float base;
    float altura;
    float area;

    printf("Base: ");
    scanf("%g",&base);
    printf("Altura: ");
    scanf("%g",&altura);

    area = (base*altura)/2;
    printf("area del triangulo = %.2f \n", area);

    
    return 0;
}