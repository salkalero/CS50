#include <stdio.h>
#include <cs50.h>

int main()
{
    int suma,ingresado;

    suma = 0;
    ingresado = 0;
        while (ingresado >= 0)
        {
            ingresado = get_int("ingrese numero: ");
            suma = suma + ingresado;
        }
        printf("La suma es:%i\n",suma);
    
}