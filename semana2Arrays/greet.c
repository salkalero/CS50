#include <cs50.h>
#include <stdio.h>


/* Empezamos solicitando el nombre del ususario junto a la entrada de ejecución del código*/
//int main(void)
//{
//    string answer = get_string("What's your name? ");
//    printf("hello, %s\n", answer);
//}

/* Vamos a aceptar algunos argumentos antes de que se ejecute el programa.*/

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
