#include <stdio.h>
#include <cs50.h>


void miaou(void);
void miaou(void)
{
    printf("miaou. Este miaou proviene de una función.\n");
}
void inicio(void);
void inicio(void)
{
    printf("---------------Inicio del bloque---------------\n");
}
void fin(void);
void fin(void)
{
    printf("---------------Fin del bloque---------------\n");
}

//Primer código

int primero(void)
{
    inicio();

    printf("Muestra tres veces miaou, usando 'printf' tres veces.\n");

    miaou();//printf("miaou\n");
    printf("miaou\n");
    printf("miaou\n");

    fin();
}

//Segundo código

int segundo(void)
{
    inicio();

    printf("Muestra tres veces miaou, usando el bucle 'while'.\n");

    int i = 3;
    while (i > 0 )
    {
        printf("miaou\n");
        i--;
    }

    fin();
}

//Tercera parte

int tercero(void)
{
    inicio();

    printf("Esto es un contador, cuando llegue a 5 se detendrá.\n");

    int i = 1;
    while(i <= 5)
    {
        printf("miaou\n");
        i++;
    }
    
    fin();
}

//Cuarta parte

int cuarta(void)
{
    inicio();

    printf("Se hace pequeñas modificaciones, el contador de pone desde '0' y en el operador se elimina el '=', el resultado sigue siendo 5 declaraciones de miaou.\n");

    int i = 0;
    while (i < 5)
    {
        printf("miaou\n");
        i++;
    }
    fin();
}

//Quinta parte

int quinta(void)
{
    inicio();

    printf("Aquí uso el bucle 'for', para obtener 3 declaraciones.\n");

    for ( int i = 0; i < 3; i++)
    {
        printf("miaou\n");
    }

    fin();
}

//Sexta parte

int sexta(void)
{
    inicio();

    int pregunta(void);
    {
        char c = get_char("¿Esta conforme con iniciar el bucle infinito?, Recuerde pulsar 'Crtl + c' para detener la ejecución del bucle y salir del programa. y/n ");

        if ( c == 'y' || c == 'Y')
        {
            int i = 0;
            while (true)
            {
                printf("miaou\n");
                printf("PULSA 'crtl + c' PARA DETENER ESTA LOCURA.\n");
            }
        }

        else if (c == 'n' || c == 'N')
        {
            printf("Paso de ver el bucle y prefiero continuar con la formación.\n");
        }
    }

    fin();
}

//Séptima parte

int septima(void)
{
    inicio();

    printf("En la siguiente parte. Estoy creando mi propia función.\n");
    void miaou(void);
    {
        printf("miaou, creado con la nueva funcion.\n");
    }
    fin();
}

//Octavo paso



int octava(void)
{
    inicio();

    printf("Función propia llamada 'miaou(void)',con un bucle de 3. La función se encuentra fuera del bucle, es una función global, para que funcione dicha función, éste deberá de estar declarada aguas arriba de la función (en este caso están al inicio del código), el resto de funciones creadas hasta entonces son locales y no se pordrían usar dentro de otras funciones.\n");

    for ( int i = 0; i < 3; i++ )
    {
        miaou();
    }

    fin();
}

//Noveno paso



void maullido(int n);

int novena(void)
{
    inicio();

        printf("Se utiliza una función personalizada a la que se le puede dar un valor y mostrará tantos miaou como se indique.\n");

    maullido(5);
}

void maullido(int n)
{
    for ( int i = 0; i < n; i++)
    {
        miaou();
    }

    fin();

}





//Código general para que funcione el resto. El int main(void) es impressindible, es el inicio del código, es la forma de que 'C' sepa por donde empezar.

int main(void)
{
    primero();

    segundo();

    tercero();

    cuarta();

    quinta();

    sexta();

    septima(); 

    octava();

    novena();


}