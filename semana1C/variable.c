#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string respuesta = get_string("¿Cómo te llamas? ");
    printf("hola, %s\n", respuesta);
}
