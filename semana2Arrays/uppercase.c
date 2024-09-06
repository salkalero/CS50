#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Una forma de convertir las minúsculas en mayñusculas*/
//int main(void)
//{
//    string s = get_string("Before: ");
//    printf("After:  ");
//    for (int i = 0, n = strlen(s); i < n; i++)
//    {
//        if (s[i] >= 'a' && s[i] <= 'z')
//        {
//            printf("%c", s[i] - 32);
//        }
//        else
//        {
//            printf("%c", s[i]);
//        }
//    }
//    printf("\n");
//}

/* Con la biblioteca ctype.h es más sencillo de conseguirlo.*/

//int main(void)
//{
//    string s = get_string("Before: ");
//    printf("After:  ");
//    for (int i = 0, n = strlen(s); i < n; i++)
//    {
//        if (islower(s[i]))
//        {
//            printf("%c", toupper(s[i]));
//        }
//        else
//        {
//            printf("%c", s[i]);
//        }
//    }
//    printf("\n");
//}

/* Toupper reconoce que solo se debe poner en mayúsculas las minúsculas, por lo que el código anterior se puede mejorar en el código siguiente.*/

int main(void){
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n ;i++){
        printf ("%c", toupper(s[i]));
        }
        printf("\n");
}
