#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    printf("Entraste a la funcion Factorial, n vale: %i\n", n);

    if(n > 1) {
        printf("La Funcion se llamara a si misma otra vez \n");
        return n * factorial(n - 1);
    }
    else {
        printf("n es igual a 1, Termina la Recursividad");
        return 1;
    }
}

int main()
{
    printf("Recursividad\n");

    int nro;
    printf("Ingresa el nro: ");
    scanf("%i", &nro);
    int result = factorial(nro);
    printf("\nEl resultado es: %i", result);

    return 0;
}
