#include <stdio.h>
#include <cs50.h>
#include <string.h>

/* Determina el número de caracteres que tiene una palabra introducida*/
//int main(void){
//    // Pidiendo el nombre del usuario
//    string name = get_string("Nombre: ");
//    // Contando el número de caracteres hasta '\0' (también conocido como NULO).
//    int n = 0;
//    while (name[n] !='\0'){
//        n++;
//    }
//    printf("%i\n", n);
//}

/* El cídgo anterior se mejora abstrayendo el conteo de la siguiente manera.*/
//int string_length(string s);
//
//int main(void){
//    string name = get_string("Nombre: ");
//    int length = string_length(name);
//    printf("%i\n", length);
//}
//
//int string_length(string s){
//    int n = 0;
//    while (s[n] != '\0'){
//        n++;
//    }
//    return n;
//}

/* se ha creado la biblioteca string.h para encontrar la longitud de una cadena, ahora se puede realizar este código.*/
int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("%i\n", length);
}
