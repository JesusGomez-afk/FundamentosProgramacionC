#include <stdio.h>

int main(){
    int x, y, op;
    float resultado;

    puts("1) Sumar");
    puts("2) Restar");
    puts("3) Multiplicar");
    puts("4) Dividir");
    printf("Opcion seleccionada: ");
    scanf("%i", &op);
   //puts("--------------------------------");

    if (op == 1){   
        printf("Ingresa X: ");
        scanf("%i", &x);
        printf("Ingresa y: ");
        scanf("%i", &y);

        resultado = x + y;
        printf("Suma = %.2f \n", resultado);
    }
    if (op == 2){   
        printf("Ingresa X: ");
        scanf("%i", &x);
        printf("Ingresa y: ");
        scanf("%i", &y);

        resultado = x - y;
        printf("Resta = %.2f \n", resultado);
    }
    if (op == 3){   
        printf("Ingresa X: ");
        scanf("%i", &x);
        printf("Ingresa y: ");
        scanf("%i", &y);

        resultado = x * y;
        printf("Multiplicacion = %.2f \n", resultado);
    }
    if (op == 4){  
        printf("Ingresa X: ");
        scanf("%i", &x);
        printf("Ingresa y: ");
        scanf("%i", &y);

        resultado = x / y;
        printf("Division = %f \n", resultado);
    }
    
    if(op > 4){
        puts("opcion no valida");
    }
    
    return 0;
}