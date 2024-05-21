#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Reto2
    int x;
    printf("Cual es el Valor? \n");
    scanf("%i", &x);

    (x%=5);
    x++;

    printf("El resultado es: %i", x);

    /*Reto1
    int x = 10;
    printf("El Valor de x es: %i \n", x);

    x+=(x*2);


    printf("Nuevo Valor: %i", x);


    //Operadores, Asignacion
    /*printf("Operadores de Incremento y Decremento. \n");

    int valor, result; //Para crear 2 Variables iguales

    valor = 25;

    result = valor++;

    printf("Resultado: %i \n", result);

    valor = 25;

    result = ++valor;

    printf("Resultado: %i \n", result);

    valor = 25;

    result = valor--;

    printf("Resultado: %i \n", result);

    valor = 25;

    result = --valor;

    printf("Resultado: %i \n", result);

    /*printf("Operadores de Asignacion. \n");
    //operadores de Asignacion
    int value;

    value = 11;

    printf("El valor de la variable es: %i \n", value);

    value += 2;

    printf("El valor de la variable es: %i \n", value);

    value -= 3;

    printf("El valor de la variable es: %i \n", value);

    value *= 4;

    printf("El valor de la variable es: %i \n", value);

    value /= 5;

    printf("El valor de la variable es: %i \n", value);

    value %= 6;*/

    //Operaciones Aritmeticas
    /*rSum = 7 + 3;
    rRes = 7.1 - 3.1;
    rDiv = 7.0 / 3.0;
    rMult = 7 * 3;
    rMod = 5%3;

    printf("Resultado de la Suma: %i\n", rSum);
    printf("Resultado de la Resta: %f\n", rRes);
    printf("Resultado de la Division: %f\n", rDiv);
    printf("Resultado de la Multiplicacion: %f\n", rMult);
    printf("Resultado del Modulo: %i\n", rMod);*/

    return 0;
}
