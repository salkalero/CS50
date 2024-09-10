#include <stdio.h>
#include <cs50.h>

int main() {

int num1;

while (true){
    num1 = get_int("Introduzca un número de un dado de 6 caras y obtendrá el opuesto:");

    if (num1 <= 6){
        switch (num1)
        {
        case 1:
                num1 == 1;
                printf("El opuesto es el 6\n");
            break;
        case 2:
                num1 == 2;
                printf("El opuesto es el 5\n");
            break;
        case 3:
                num1 == 3;
                printf("El opuesto es el 4\n");
            break;
        case 4:
                num1 == 4;
                printf("El opuesto es el 3\n");
            break;
        case 5:
                num1 == 5;
                printf("El opuesto es el 2\n");
            break;
        case 6:
                num1 == 6;
                printf("El opuesto es el 1\n");
            break;
        }
    }
    else{
        printf("Número incorrecto.\n");
    }
}
return  0;
}