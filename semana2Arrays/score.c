#include <stdio.h>
#include <cs50.h>

/* Proporciona 3 lugares econsecutivos en la memoria con "score[3]".*/
//int main(void){
//    // Get scores
//    int scores[3];
//    scores[0] = get_int("Score: ");
//    scores[1] = get_int("Score: ");
//    scores[2] = get_int("Score: ");
//
//    //print average
//
//printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
//}


/* El siguiente código es una mejora del anterior.*/
//int main(void){
//
//    int scores[3];
//    for (int i = 0; i <3; i++){
//        scores[i]= get_int("Score: ");
//    }
//    // Print average
//    printf("Averange: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
//}


/* En el siguiente código, se simplifica el cálculo promedio. */

// Constant
const int N = 5;

// Prototype
float averange(int length, int array[]);

int main(void){
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++){
        scores[i] = get_int("Score: ");
    }
    printf("Averange: %f\n", averange(N, scores));
}


float averange(int length, int array[]){
    // Calculate averange
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum / (float) length;
}
