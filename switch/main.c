#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional Switch \n");

    int option;

    scanf("%i", &option);

    switch(option) {
    case 1:
        printf("Elegiste el Nro 1\n");
    break;
    case 2:
        printf("Elegiste el Nro 2\n");
    break;
    case 3:
        printf("Elegiste el Nro 3\n");
    break;
    default:
        printf("Elegiste otro Nro\n");
    break;
    }

    return 0;
}
