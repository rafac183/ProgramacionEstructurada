#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Manejo de Archivos, Creacion\n");

    FILE *archivo;

    archivo = fopen("archivo001.txt", "w");

    if (archivo != NULL) {
        printf("El Archivo se ha Creado Exitosamente \n");
        fclose(archivo);
    }
    else {
        printf("El Archivo no se ha Creado");
    }

    return 0;
}
