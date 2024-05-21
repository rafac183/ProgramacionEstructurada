#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador Do While \n");

    /*int val = 1;

    do {
        printf("Estos son los Valores: %i\n", val++);
    } while(val <= 100);*/

    char answer, val;
    answer = 'h';

    do {
        printf("Ingresa una Letra: ");
        scanf("%c", &val);
    } while (val != answer);

    printf("Coinciden las letras %c == %c", val, answer);

    //ejercicio
    return 0;
}
