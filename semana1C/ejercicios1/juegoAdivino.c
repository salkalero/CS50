#include <stdio.h>
#include <cs50.h>

int main(){
    int num1;

    printf("Intente adivinar qué número va a salir, \n");
    
    num1 = get_int("Introduzca un número del 0 al 50.\n");
    while (true ){
        num1 = num1 + 1;
        printf("%i\n",num1);

        if (num1 == 50){
            return  0;
        }
        
        
        

    }


    return  0;
}