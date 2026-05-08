#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "dividir.h"
#include "multiplicar.h"

int main(int argc, char *argv[])
{
    int a,b,c;

    printf("ingrese el 1er numero: ");
    scanf("%d", &a);

    printf("ingrese el 2do numero: ");
    scanf("%d", &b);

    printf("que operacion quiere realizar?\n");
    printf("1.suma 2.resta 3.multiplicacion 4.division\n");

    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("La suma es: %d\n", sumar(a,b));
        break;

    case 2:
        printf("La diferencia es: %d", restar(a,b));
        break;

    case 3:
        printf("La multiplicacion es: %d", multiplicar(a,b));
        break;

    case 4:
        printf("El cociente es: %d", dividir(a,b));
        break;

    default:
        break;
    }

    return 0;
}