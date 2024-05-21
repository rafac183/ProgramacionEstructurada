#include <stdio.h>
#include <stdlib.h>

int conversorAD(a) {
    int result = a / 1000;
    return result;
}
int conversorAP(b) {
    int resultado = b * 1000;
    return resultado;
}
int potencia(a, b){
    int resultado = 1;
    for (int i = 0; i < b; i++) {
        resultado*=a;
    }
    return resultado;
}

int main()
{
    printf("Conversor a Dolares\n");

    //Primer Reto

    int base, exponente, result;
    printf("Ingresa la Base: ");
    scanf("%i", &base);
    printf("\n");
    printf("Ingresa el Exponente: ");
    scanf("%i", &exponente);
    printf("\n");

    result = potencia(base, exponente);

    printf("Resultado: %i", result);

    /*Segundo Reto
    int monto;
    int pesos, dolares, val;
    pesos = 1;
    dolares = 2;

    printf("Si Quieres Convertir de Pesos a Dolares presiona '1'\n\n");
    printf("Si Quieres Convertir de Dolares a Pesos presiona '2'\n\n");

    printf("Introduce tu Pedido: ");
    scanf("%i", &val);
    printf("\n");

    printf("Introduce el Monto: ");
    scanf("%i", &monto);
    printf("\n");
    if (val == pesos) {
        printf("\n");
        int res = conversorAD(monto);
        printf("Esto vale en Dolares: %i", res);
    }
    else if (val == dolares) {
        printf("\n");
        int res = conversorAP(monto);
        printf("Esto vale en Pesos: %i \n", res);
    }
    else {
        printf("Opcion NO Valida");
    }*/



    return 0;
}
