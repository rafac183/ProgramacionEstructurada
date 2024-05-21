#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("String\n");

    char nameA[50];

    printf("Ingresa el Nombre: ");
    gets(nameA);

    char longitudName = strlen(nameA);
    printf("Invertido: ");

    for(char i = longitudName; i >= 0; i-=2) {
        printf("%c ", nameA[i]);
    }

    /*char name[50];

    int size;

    printf("Ingresar el Nombre con Gets: \n");

    gets(name);

    printf("El Nombre es: ");
    puts(name);

    size = strlen(name);

    printf("\n El Tamaño de la cadena es: %i \n", size);*/

    return 0;
}
