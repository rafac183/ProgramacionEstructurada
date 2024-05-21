#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Reto
    int x, y;
    x = 5;
    printf("Adivina el Nro!\n");
    scanf("%i", &y);

    if(x == y) {
        printf("Adivinaste!");
    }
    else {
        printf("Ese no es, Perdiste!");
    }
    /*printf("Condicion if-else \n");

    float valA, valB, valC;
    valA = 50;
    valB = 100;
    valC = 150;

    printf("Primera condicion \n");

    if(valA == valB) {
        printf("No se va a cumplir esta Condicion");
    }
    else if(valB == valC) {
        printf("Tampoco se cumple");
    }
    else {
        printf("Ninguna Condicion se Cumplio \n");
        printf("Despues de esta linea se cumplio");
    }
    /*printf("Condicion if \n"); como se usa else

    float valA, valB, valC;
    valA = valB = 100;

    printf("Primera Condicion \n");
    if (valA == valB) {
        printf("Ambos son Iguales \n");
    }
    printf("Segunda Condicion");
    if (valA == valB) {
        printf("Ambos son Iguales \n");
        valC = valA + valB;
        printf("Ademas la suma de Ambos Nros es: %f \n", valC);
    }*/
    return 0;
}
