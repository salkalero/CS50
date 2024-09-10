#include <stdio.h>
#include <cs50.h>

int main()
{
int num,result;

num = 1;

while (num <= 100)
{
    result = num % 2;
    if (result == 0)
    {
        printf("%i\n",num);
    }
    
    num ++;
}
    return 0;
}