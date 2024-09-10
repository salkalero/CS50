#include <stdio.h>
#include <cs50.h>

int main()
{
int num1,num2,result;
printf("\nLocalizar los números pares entre dos seleccionados por el usuario.\n");
num1 = get_int("\nIngrese el primer número: ");
num2 = get_int("\nIngrese el segundo número: ");

    while (true)
    {
        if (num2 > num1)
        {
            while(num1 <= num2)
            {
                result = num1 % 2;
                if (result == 0)
                {
                    printf("%i\n",num1);
                }
                num1++;
            }
        }
        else{
        printf("ERROR:El segundo número no puede ser menor o igual que el primero\n");
        }
        return  0;
    }

}