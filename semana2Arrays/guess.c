#include <cs50.h>
#include <stdio.h>

/* Código inicial con los problemas*/
//int main(void){
//    int number = 5;
//    int guess = get_int("What's your guess? ");
//
//
//        while(guess != number){
//            printf("Wrong guess!\n");
//        }
//
//
//        printf("You're correct guess!\n");
//
//}

/* Código corregido para que no sea un bucle infinito, pero ahora sale las dos declaraciones de printf, hay que corregirlo.*/
//int main(void){
//    int number = 5;
//    int guess = get_int("What's your guess? ");
//
//
//        if(guess != number){
//            printf("Wrong guess!\n");
//        }
//
//
//        printf("You're correct guess!\n");
//
//}

/* Código corregido para que no sea un bucle y sólo se muestre el mensaje que corresponda*/
int main(void){
    int number = 5;
    int guess = get_int("What's your guess? ");


        if(guess != number){
            printf("Wrong guess!\n");
        }

        else{
        printf("You're correct guess!\n");
        }
}

/* Código corregido para que siempre te pida el número hasta que des con el corecto*/
//int main(void){
//    int number = 5;
//    int guess = get_int("What's your guess? ");
//
//
//        while(guess != number){
//            guess = get_int("What's your guess? ");
//        }
//
//
//        printf("You're correct guess!\n");
//
//}
