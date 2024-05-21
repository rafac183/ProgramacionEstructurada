#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    printf("Librerias\n");

    float primerValue, segundoValue, result;
    int option;

    printf("Soy una Calculadora \n");
    printf("Ingresa 2 Valores! \n");
    printf("Primer Valor: ");
    scanf("%f", &primerValue);
    printf("Segundo Valor: ");
    scanf("%f", &segundoValue);
    printf("Que Operacion desea realizar? \n");
    printf("1. Suma \n");
    printf("2. Resta \n");
    printf("3. Multiplicacion \n");
    printf("4. Division \n");

    scanf("%i", &option);

    switch (option) {
        case 1:
            result = suma(primerValue, segundoValue);
        break;
        case 2:
            result = resta(primerValue, segundoValue);
        break;
        case 3:
            result = multiplicacion(primerValue, segundoValue);
        break;
        case 4:
            result = division(primerValue, segundoValue);
        break;
    }

    printf("El Resultado de la operacion es: %f", result);
    return 0;
}
