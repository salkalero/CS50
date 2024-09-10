#include <cs50.h>
#include <stdio.h>

string letras();
//int edad();
long dni();
int date();

int main(void)
{
    letras();
    //edad();
    dni();
    date();

    return 0;
}

string letras()
{
    string pregunta = get_string("¿Cómo te llamas? ");
    printf("Hola %s\n",pregunta);
    return 0;
}

int date()
{
    string d = get_string("Fecha nacimiento(dd/mm/aaaa): ");
    printf("Fecha introducida; %s\n", d);
    return 0;
}

long dni()
{
    long dni = get_long("DNI: ");
    printf("Su DNI %ld\n",dni);
    return 0;
}