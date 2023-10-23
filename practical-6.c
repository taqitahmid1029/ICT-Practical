#include <stdio.h>

int main()
{
    int a, b, c, sum;
    float avg;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avg = (float) sum/3;
    printf("Sum = %d, Avarage = %.2f", sum, avg);
    return 0;
}