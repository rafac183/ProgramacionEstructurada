#include <stdio.h>
#include <stdlib.h>

struct personalData {
    char name[20];
    char lastName[20];
    int age;
};

int main()
{
    printf("Estructuras de Datos\n");

    struct personalData person;

    FILE *archivos;
    archivos = fopen("datosPersonales001.dat", "rb"/*leer*//*"wb"(write)*/);

    if (archivos != NULL) {

        fread(&person, sizeof(person), 1, archivos);

        printf("Imprimir los datos \n");
        printf("Nombre: %s \n", person.name);
        printf("Apellido: %s \n", person.lastName);
        printf("Edad: %i \n", person.age);


        /*fflush(stdin);

        printf("Leer los Datos: \n");
        printf("Ingresar Nombre: ");
        gets(person.name);

        printf("Ingresar Apelido: ");
        gets(person.lastName);

        printf("Ingresar Edad: ");
        scanf("%i", &person.age);

        printf("Imprimir Datos: \n");
        printf("%s \n", person.name);
        printf("%s \n", person.lastName);
        printf("%i \n", person.age);

        fwrite(&person, sizeof(person), 1, archivos);*/

        fclose(archivos);
    }
    else {
        printf("No se ha Podido crear el archivo");
    }



    return 0;
}
