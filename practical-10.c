#include <stdio.h>

int main()
{
    char name[15];
    printf("Enter your nickname: ");
    scanf("%s", &name);
    printf("Your nickname is %s", name);
    return 0;
}