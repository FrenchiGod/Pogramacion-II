#include <stdio.h>
#include <string.h>
#include "funcion.h"

int valores(int a, int b)
{
    int x;
    printf("valores originales: %d %d",a,b);
    x=a;
    b=a;
    a=x;
    printf("valores intercambiados; %d %d",a,b);

}
int intercambio(int *a, int *b)
{   
     int *x;
     x=*a;
     b=*b;
     a=*x;
     printf("los valores intercabiados por referecia son: %d %d",a,b);
}


