#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos Bidimencionales \n");

    int bidimencionalArray[4][4];

    bidimencionalArray[0][0] = 11;
    bidimencionalArray[0][1] = 12;
    bidimencionalArray[0][2] = 13;
    bidimencionalArray[0][3] = 14;

    bidimencionalArray[1][0] = 29;
    bidimencionalArray[1][1] = 28;
    bidimencionalArray[1][2] = 27;
    bidimencionalArray[1][3] = 26;

    bidimencionalArray[2][0] = 36;
    bidimencionalArray[2][1] = 35;
    bidimencionalArray[2][2] = 34;
    bidimencionalArray[2][3] = 33;

    bidimencionalArray[3][0] = 45;
    bidimencionalArray[3][1] = 46;
    bidimencionalArray[3][2] = 47;
    bidimencionalArray[3][3] = 48;

    printf("Valor en (0,1): %i\n", bidimencionalArray[0][0]);
    printf("Valor en (0,1): %i\n", bidimencionalArray[1][0]);
    printf("Valor en (0,1): %i\n", bidimencionalArray[2][0]);
    printf("Valor en (0,1): %i\n", bidimencionalArray[3][0]);


    return 0;
}
