#include <stdio.h>
#include <cs50.h>


/* Código para enumerar desde el 100 hasta el 1 de forma inversa.*/
int main()
{
int num;

num = 100;

while (num >= 1)
{
    printf("%i\n",num);
    num --;
}
    return  0;
}