#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 3)// Aquí se indica el número de argumento que hay que introducir.
    {
        printf("Missing command-line argument\n");// Sino se cumple con la condicion se mostrará con este texto.
        return 1;
    }
    printf("hello, %s\n", argv[1]);// En argv[1] indica que argumento es el que se muestra de los introducidos.
    return 0;
}
