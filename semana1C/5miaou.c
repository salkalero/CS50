#include <stdio.h>
#include <cs50.h>

//Primer código

int primero(void)
{
    printf("Muestra tres veces miaou, usando 'printf' tres veces.\n");

    printf("miaou\n");
    printf("miaou\n");
    printf("miaou\n");

    printf("Fin de la primera parte\n");
}

//Segundo código

int segundo(void)
{
    printf("Muestra tres veces miaou, usando el bucle 'while'.\n");

    int i = 3;
    while (i > 0 )
    {
        printf("miaou\n");
        i--;
    }

    printf("Fin de la segunda parte\n");
}

//Tercera parte

int tercero(void)
{
    printf("Esto es un contador, cuando llegue a 5 se detendrá.\n");

    int i = 1;
    while(i <= 5)
    {
        printf("miaou\n");
        i++;
    }
    
    printf("Fin de la tercera parte\n");
}

//Código general para que funcione el resto

int main(void)
{
    primero();

    segundo();

    tercero();
}