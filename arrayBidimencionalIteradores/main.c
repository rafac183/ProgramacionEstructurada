#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos Bidimencionales e Iteradores\n\n");

    float arrays[5][6];
    float nota = 6;

    for(int i = 0; i < 5; i++) {
        float acum = 0;
        for(int j = 0; j < 5; j++) {

        arrays[i][j] = nota + j;
        printf("La Sumatoria del Array[%i][%i]: %f \n", i, j, arrays[i][j]);
        acum+=arrays[i][j];
        }
        nota+=2;
        acum/=5;
        arrays[i][5] = acum;
        printf("\n\t El Promedio de la Fila %i: %f\n\n", i, arrays[i][5]);
    }

    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 6; j++) {
            printf("%f \t", arrays[i][j]);
        }
        printf("\n");
    }

    int interger[4][5];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            interger[i][j] = ((i + j)*100 + j);
            printf("(%i, %i): %i \n", i, j, interger[i][j]);
        }
    }
}
