#include <stdio.h>

int main()
{
    int i, sum=0;
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    printf("The sum of all integer number from 1 to 100 is %d", sum);
    return 0;
}