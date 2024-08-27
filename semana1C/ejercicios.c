#include <stdio.h>
#include <cs50.h>

int operaciones(void)
{
    int calls = 4;
    calls = calls + 1;
    calls = calls - 2;
    calls = calls * 3;
    calls = calls / 2;

    printf("int calls = 4;\n calls = calls + 1;\n calls = calls - 2;\n calls = calls * 3;\n calls = calls / 2;\n");
    printf("El siguiente valor que da es 4 por que el tipo de dato es entero.\n");
    printf("Resultado: %i\n",calls);

    printf("float result = 4;\n result = result + 1;\n result = result - 2;\n result = result * 3;\n result = result / 2;\n");
    printf("El siguiente dato es de tipo float y su resultado es el real.\n");
    
    float result = 4;
    result = result + 1;
    result = result - 2;
    result = result * 3;
    result = result / 2;

    printf("Resultado: %f\n",result);

    printf("Conseguir un float con datos int\n");
    printf("int ejem = 2;\n ejem += 1;\n ejem *=3;\n float ejem2 = ejem;\n ejem2 /=2;\n");

    int ejem = 2;
    ejem += 1;
    ejem *=3;
    float ejem2 = ejem;
    ejem2 /=2;


    printf("Resultado: %f\n", ejem2);
}




int main(void)
{
    operaciones();
}