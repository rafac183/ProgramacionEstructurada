#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores Logicos \n");

    float valA, valB, valC;
    valA = 5;
    valB = valC = 10;

    if((valA < valB) && (valB == valC)) {
        printf("Se Cumplieron las 2 Condiciones \n");
    }
    else {
        printf("No se Cumplieron las Condiciones \n");
    }

    if((valA > valB) || (valB == valC)) {
        printf("Se Cumplieron por lo menos una de las condiciones \n");
    }
    else {
        printf("No se Cumplieron Ninguna de las Condiciones \n");
    }

    /*if((valA < valB)  (valB == valC)) {
        printf("Se Cumplieron las 2 Condiciones \n");
    }
    else {
        printf("No se Cumplieron las Condiciones \n");
    }*/

    return 0;
}
