#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Reto
    int arreglo[5];

    for(int i = 0; i < 5; i++){
        printf("Ingresa tu Nro(%i): ", i);
        scanf("%i", &arreglo[i]);
    }

    if (arreglo[0] >= arreglo[1] && arreglo[0] >= arreglo[2] && arreglo[0] >= arreglo[3] && arreglo[0] >= arreglo[4]) {
        printf("Este es el Mayor: %i", arreglo[0]);
    }
    else if (arreglo[1] >= arreglo[0] && arreglo[1] >= arreglo[2] && arreglo[1] >= arreglo[3] && arreglo[1] >= arreglo[4]) {
        printf("Este es el Mayor: %i", arreglo[1]);
    }
    else if (arreglo[2] >= arreglo[0] && arreglo[2] >= arreglo[1] && arreglo[2] >= arreglo[3] && arreglo[2] >= arreglo[4]) {
        printf("Este es el Mayor: %i", arreglo[2]);
    }
    else if (arreglo[3] >= arreglo[0] && arreglo[3] >= arreglo[1] && arreglo[3] >= arreglo[2] && arreglo[3] >= arreglo[4]) {
        printf("Este es el Mayor: %i", arreglo[3]);
    }
    else if (arreglo[4] >= arreglo[0] && arreglo[4] >= arreglo[1] && arreglo[4] >= arreglo[2] && arreglo[4] >= arreglo[3]) {
        printf("Este es el Mayor: %i", arreglo[4]);
    }
    /*
    printf("Arrays e Iteradores\n");

    int intergerArray[11];

    for(int i = 0; i < 11; i++) {
        intergerArray[i] = i * i;
        printf("Valor (%i): %i\n", i, intergerArray[i]);
    }*/

    return 0;
}
