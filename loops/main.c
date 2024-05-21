#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador While \n");
    printf("Indica tu Limite: ");
    int limit;
    int i = 1;

    scanf("%i", &limit);

    while(i <= limit) {
        printf("Numero: %i \n", i);
        i++;
    }


    return 0;
}
