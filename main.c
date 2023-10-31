#include <stdio.h>
#include "archivo1.h"
#include "resta.h"
#include "divi.h"
#include "mult.h"

int main()
{
    
int a=0, b=0, opcion;

do
{
    printf("\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("\n");
        printf("---SUMA---\n");
        printf("Ingrese el 1er valor: \n");
        scanf("%d", &a);
        printf("Ingrese el 2do valor: \n");
        scanf("%d", &b);
        printf("El resultado de la suma es: %d\n", suma(a,b));

        break;
    case 2:
        printf("\n");
        printf("---RESTA---\n");
        printf("Ingrese el 1er valor: \n");
        scanf("%d", &a);
        printf("Ingrese el 2do valor: \n");
        scanf("%d", &b);
        printf("El resultado de la suma es: %d\n", resta(a,b));
        break;
    case 3:
        printf("\n");
        printf("---MULTIPLICACION---\n");
        printf("Ingrese el 1er valor: \n");
        scanf("%d", &a);
        printf("Ingrese el 2do valor: \n");
        scanf("%d", &b);
        printf("El resultado de la suma es: %d\n", mult(a,b));
        break;
    case 4:
        printf("\n");
        printf("---DIVISION---\n");
        printf("Ingrese el 1er valor: \n");
        scanf("%d", &a);
        printf("Ingrese el 2do valor: \n");
        scanf("%d", &b);
        printf("El resultado de la suma es: %d\n", divi(a,b));
        break;
    case 5:
        printf("\n");
        printf("Gracias por usar el codigo\n");
        break;
    
    default:
    printf("Opcion ingresada no valida\n");
        break;
    }

} while (opcion=!5);

}


