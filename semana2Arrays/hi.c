#include <stdio.h>
#include <cs50.h>

/* Aparecerá "HI!". Si mantenemos juntos los "%c", se muestra los caracteres juntos pero si dejamos un espacio como se ve en el código siguiente, se muestra separado.*/
//int main(void){
//    char c1 = 'H';
//    char c2 = 'I';
//    char c3 = '!';
//    printf("%c%c%c\n", c1, c2, c3);
//}

/* Al cambiar el tipo de datos de "%c" a "%i" nos muestara el equivalente de "HI!" pero en ASCII*/
//int main(void){
//    char c1 = 'H';
//    char c2 = 'I';
//    char c3 = '!';
//    printf("%i %i %i\n", c1, c2, c3);
//}

/* Otro ejemplo para comprender mejor cómo funciona String.*/
//int main(void){
//    string s = "HI!";
//    printf("%c%c%c\n", s[0], s[1], s[2]);
//}

/* Podemos reemplazar %c por %i, incluyo también el NULL que es el "s[3]*/
//int main(void){
//    string s = "HI!";
//    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
//}

/* Otro ejemplo, quiero decir HI! y BYE!.*/
//int main(void)
//{
//    string s = "HI!";
//    string t = "BYE!";
//
//    printf("%s\n%s\n", s, t);
//    //printf("%s\n", t);
//}

/* Mejoramos el código anterior con el siguiente.*/
int main(void)
{
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s%s\n", words[0] , words[1]);
    //printf("%s\n", words[1]);
}



