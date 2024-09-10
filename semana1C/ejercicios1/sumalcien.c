#include <stdio.h>
#include <cs50.h>

int main()
{
int num,sum;

num = 1;
sum = 0;

while (num <= 100)
    {
        sum = sum + num;
        num ++;
    }
    printf("%i\n",sum);

    return  0;
}