#include <studio.h>
#include <sumar.h>
#include <restar.h>


int main(int argc, char const *argv[])
{
    int a,b;

    printf("Ingrese el 1er número: ");
    scanf("%d", &a);

    printf("Ingrese el 2do número: ");
    scanf("%d", &b);

    printf("La suma es: %d\n", sumar(a,b));
    printf("La resta es: %d", restar(a,b));

    return 0;
}

