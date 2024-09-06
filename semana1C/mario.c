#include <stdio.h>
#include <cs50.h>

int hori(void);
int vert(void);
int comb(void);
int bloConst(void);




int hori(void)
{
    printf("Muestra 4 interrogaciones horizontales.\n");

    for ( int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
}

int vert(void)
{
    printf("Muestra 3 bloques'#' en vertical.\n");

    for ( int i = 0; i < 3; i++)
    {
        printf("#\n");
    }

}

int comb(void)
{
    printf("Combinamos el horizontal y vertical para crear muros de 3*6.\n");

    for (int i = 0; i < 3; i++)// Este bucle define que fila vertical se imprime
    {
        for (int j = 0; j < 6; j++ )//Este bucle imprime en cada fila horizontal
        {
            printf("#");//Imprime el material del muro
        }
        printf("\n");//Crea las filas horizontales
    }
}

int bloConst(void)
{
    printf("Hacemos que el bloque sea una constante.\n");

    const int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


int main(void)
{
    hori();

    vert();

    comb();

    bloConst();

}