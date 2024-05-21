#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Reto

    int value[5];
    printf("Ingresa lo Valores: \n");

    printf("Valor[1]: ");
    scanf("%i", &value[0] );
    printf("Valor[2]: ");
    scanf("%i", &value[1]);
    printf("Valor[3]: ");
    scanf("%i", &value[2]);
    printf("Valor[4]: ");
    scanf("%i", &value[3]);
    printf("Valor[5]: ");
    scanf("%i", &value[4]);

    int result;
    result = value[0] * value[1] * value[2] * value[3] * value[4];
    printf("El Resultado es: %i", result);

    /*printf("Arreglos Unidemencionales\n");

    int intergerList[3];
    intergerList[0] = 4;
    intergerList[1] = 5;
    intergerList[2] = 6;

    float floatList[] = {23.4, 34.5, 45.6, 21.8, 56.7};

    char charList[4];
    charList[0] = 'D';
    charList[1] = 'A';
    charList[2] = 'N';
    charList[3] = 'I';

    printf("\n Primer Entero: \t\t %i", intergerList[0]);
    printf("\n Ultimo Flotante \t\t %f", floatList[4]);
    printf("\n Primer Entero: \t\t %c%c%c%c", charList[0], charList[1], charList[2], charList[3]);
*/
    return 0;
}
