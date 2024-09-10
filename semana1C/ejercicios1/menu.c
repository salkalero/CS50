#include <stdio.h>
#include <cs50.h>

int main()
{
int select,num1,num2,result;


result = 0;

select = get_int("Seleccione una opción: \n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Salir\n");

while (select != 5)
    {
        if (select >=6)
        {
            printf("Selección errónea\n");
        }

        else if (select == 1)
        {
            num1 = get_int("número A:\n");
            num2 = get_int("número B:\n");
            result = num1 + num2;
            printf("La suma es de %i\n",result);
        }

        else if (select == 2)
        {
            num1 = get_int("número A:\n");
            num2 = get_int("número B:\n");
            result = num1 - num2;
            printf("La resta es de %i\n",result);
        }

        else if (select == 3)
        {
            num1 = get_int("número A:\n");
            num2 = get_int("número B:\n");
            result = num1 * num2;
            printf("La multiplicación es de %i\n",result);
        }

        if (select == 4)
        {
            num1 = get_int("número A:\n");
            num2 = get_int("número B:\n");
            result = num1 / num2;
            printf("La división es de %i\n",result);
        }
        select = get_int("\nSeleccione otra opción: \n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Salir\n");
        //return  0;
    }
    

    return  0;
}


//#include <stdio.h>
//
//int main() {
//    int opcion = 0;
//    int num1;
//    int num2;
//
//    // Bucle que continuará hasta que el usuario seleccione salir
//    while (opcion != 4) {
//        // Mostrar el menú
//        printf("\n--- Menú ---\n");
//        printf("1. Opción 1\n");
//        printf("2. Opción 2\n");
//        printf("3. Opción 3\n");
//        printf("4. Salir\n");
//        printf("Selecciona una opción: ");
//        scanf("%d", &opcion);
//
//        // Procesar la opción seleccionada usando else-if
//        if (opcion == 1) {
//            printf("Has seleccionado la Opción 1\n");
//        } else if (opcion == 2) {
//            printf("Has seleccionado la Opción 2\n");
//        } else if (opcion == 3) {
//            printf("Has seleccionado la Opción 3\n");
//        } else if (opcion == 4) {
//            printf("Saliendo del programa...\n");
//        } else {
//            printf("Opción no válida. Inténtalo de nuevo.\n");
//        }
//    }
//
//    return 0;
//}