#include <stdio.h>
#include <cs50.h>

//Primera escritura del código

int primera(void)
{
    int x = get_int("¿Valor de x? ");
    int y = get_int("¿Valor de Y? ");

    if (x < y)
        {
            printf("x es menor que y\n");
        }
    printf("final de la primera parte\n");
}

//Segunda escritura del código

int segunda(void)
{
    int x = get_int("¿Valor de x? ");
    int y = get_int("¿Valor de y? ");
    if (x < y)
        {
            printf("x es menor que y\n");
        }
    else if (x > y)
        {
            printf("x es mayor que y\n");
        }
    else 
        {
            printf("x es igual a y\n");
        }
        printf("Final de la segunda parte\n");
}

//Código principal

int main(void)
{
    primera();

    segunda();
}