#include <stdio.h>
#include <cs50.h>

int main()
{
int contador,suma,resultado;

contador = 1;
suma = 0;

while (contador <= 100)
    {
        resultado = contador % 2;
        if (resultado == 1)
            {
                suma = suma + contador;
            }
        contador ++;
        //printf("%i\n",suma);
    }
    printf("%i\n",suma);
    return  0;
}
