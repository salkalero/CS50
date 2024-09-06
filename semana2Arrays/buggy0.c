//#include <cs50.h>
//#include <stdio.h>

/* Se busca tres bloque en vertical.*/
/* Se esperan 3 bloques, pero aparecen 4.*/
//#include <stdio.h>
//int main(void){
//    for (int i = 0; i <= 3; i++){
//        printf("#\n");
//    }
//}

/* Se modifica printf para que muestre por qué son 4 bloques los que aparecen.*/
//#include <stdio.h>
//int  main(void){
//    for (int i = 0; i <= 3; i++){
//        printf("i is %i\n", i);
//        printf("#\n");
//    }
//}

/* Se modifica el operador de "<=" a "<", de esta forma sólo aparecen 3 bloques.*/
//#include <stdio.h>
//int main(void){
//    for (int i = 0; i < 3; i++){
//        printf("#\n");
//    }
//}

/* El siguiente código tiene un error. Vamos a localizarlo con la herramienta
de "depuración". Se activa con el comando "debug50 ./buggy0 */
#include <cs50.h>
#include <stdio.h>

void print_column(int height);

int main(void){
    int h = get_int("Height: ");
    print_column(h);
}

void print_column(int height){
    for (int i = 0; i <= height; i++){
        printf("#\n");
    }
}
