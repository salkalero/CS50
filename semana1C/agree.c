#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user to agree
    char c = get_char("¿Usted está de acuerdo? (y/n)");

    //Check whether agree
    if (c == 'y' || c == 'Y')
    {
        printf("Sí, estoy de acuerdo.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("No, no estoy de acuerdo.\n");
    }
}