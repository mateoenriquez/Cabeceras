#include <stdio.h>
#include "archivo1.h"

int main()
{
    
int a=0, b=0;
printf("Ingrese el 1er valor: \n");
scanf("%d", &a);
printf("Ingrese el 2do valor: \n");
scanf("%d", &b);
printf("El resultado de la suma es: %d\n", suma(a,b));

}


