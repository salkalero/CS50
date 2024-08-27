#include <stdio.h>
#include <cs50.h>
#include "comandosComunes.c"



//Bloque 1

int uno(void)
{
    printf("En este código hay un '#include' que hace referencia a funciones que se encuentran en otro archivo. A continuación swe realiza una suma.\n");

    inicio();

    valorX();
    //Aparece en pantalla para introducir el valor de x
    int x = get_int("x: ");

    valorY();
    //Aparece en pantalla para introducir el valor de y
    int y = get_int("y: ");

    //Realiza la operación
    printf("%i\n", x + y);

    fin();
}

//Bloque 2

int add(int a, int b);

int dos(void)
{
    inicio();

    printf("Aquí se a abstraido la suma con una función.\n");

    valorX();

    int x = get_int("x: ");

    valorY();

    int y = get_int("y: ");

    int z = add(x, y);
    printf("%i\n", z);

    fin();
}

int add(int a, int b)
{
    int c = a + b;

    return c;

}

//Bloque 3

int suma(int a, int b);

int tres(void)
{
    inicio();
    printf("Se ha mejorado un poco la codificación'ver el código'.\n");
    valorX();
    int x = get_int("x: ");
    valorY();
    int y = get_int("y: ");
    printf("%i\n",add(x,y));
    fin();
}

int suma(int a, int b)
{
    return a + b;
}

//Bloque 4

int cuatro(void)
{
    inicio();
    printf("También puede realizar la suma mediante el truncamiento de la siguiente manera'ver código'.\n");
    valorX();
    long x = get_long("x: ");
    valorY();
    long y = get_long("y: ");
    printf("%li\n", x + y);
    fin();
}

//Bloque cinco

int cinco(void)
{
    inicio();
    printf("La división se realiza de forma similar, mediante el truncamiento,'ver código'.\n");
    valorX();
    long x = get_long("x: ");
    valorY();
    long y = get_long("y: ");
    printf("%li\n", x / y);
    fin();
}
int main(void)
{
    uno();

    dos();

    tres();

    cuatro();

    cinco();
}
