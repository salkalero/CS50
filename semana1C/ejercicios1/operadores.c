#include<stdio.h>
#include<cs50.h>

int operacion();

int main()
{

    operacion();

    return  0;
}

int operacion()
{

    int suma,resta,mult,div,resto;

    int num1 = get_int("Escribe un número: ");
    int num2 = get_int("Escribe otro número: ");

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    resto = num1 % num2;

    printf("Suma:%i\nResta:%i\nMultiplicación:%i\nDivisión:%i\nResto:%i\n",suma,resta,mult,div,resto);


    return  0;
}

