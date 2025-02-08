#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    float pi = 3.1516;

    int a = 5;
    float b = 10.5;
    float suma = a + b;
    float resta = a - b;

    printf("x=%i pi =%f\n");
    printf("%i + %f = %f\n", a, b, suma);
    printf("%i - %f = %f", a, b, resta);
    return 0;
}
