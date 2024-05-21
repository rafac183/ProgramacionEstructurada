#include <stdio.h>
#include <stdlib.h>

char name[];
int cali;

int aprobado(a) {
    if (a < 7) {
        printf("El alumno %s a Reprobado!", name);
    }
    else if (a > 7) {
        printf("El alumno %s a Aprobado!", name);
    }
}

/*char publicText[] = {"Texto en una variable Global \n"};

void check() {
    printf("\n'Imprimir desde la Funcion: Check'\n");

    printf("Variable Global: ");
    printf("%s \n", publicText);

    printf("Variable Local: \n");
    //printf("%s", privateText);
}*/

int main()
{
    printf("Variables Globales! RETO\n");

    printf("Ingresa el Nombre: ");
    gets(name);
    printf("Ingresa la Calificacion: ");
    scanf("%i", &cali);

    aprobado(cali);




    /*char privateText[] = {"Texto en Variable Local"};

    printf("Variable Global: ");
    printf("%s", publicText);

    printf("Variable Local: ");
    printf("%s", privateText);

    check();*/

    return 0;
}
