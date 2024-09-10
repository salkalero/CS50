#include <stdio.h>
#include <cs50.h>

/* Código para enumerar los cien primeros números, empezando desde 1 hasta 100. Esta es una forma de hacerlo*/
//int main()
//{
//    int num;
//
//    num = 0;
//
//    while (num < 100)
//    {
//        num = num + 1;
//        printf("%i\n",num);
//        
//    }
//    return 0;
//}


/* Otra configuración del código para conseguir el mismo resultado que el código anterior.*/
int main()
{
    int num;

    num = 1;

    while (num <= 100)
    {
        printf("%i\n",num);
        num ++;
    }
        return 0;
}