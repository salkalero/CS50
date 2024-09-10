#include <stdio.h>
#include <cs50.h>

int main()
{

    int num1,num2,resultado;
    string a;

    num1 = get_int("Número 1: ");
    a = get_string("Elija el operador");
    num2 = get_int("Número 2: ");
    
    resultado = num1 + a + num2;

    
    
    printf("%i\n",resultado);
    


    return 0;
}