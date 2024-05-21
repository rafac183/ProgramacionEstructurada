#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador For. \n");

    int upperLim, bottomLim;

    printf("Imprimir en Orden Descendiente \n");

    printf("Ingresar Limite Superior: \n");
    scanf("%i", &upperLim);

    printf("Ingresar Limite Inferior: \n");
    scanf("%i", &bottomLim);
    for(int i = upperLim; i >= bottomLim; i--) {
        printf("Numero: %i \n", i);
    }

    return 0;
}
