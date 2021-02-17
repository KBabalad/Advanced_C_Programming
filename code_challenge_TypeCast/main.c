#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Hello! Please input an Integer number\n");
    scanf("%f",&x);
    printf("The number is %.1f.\n", (float)x); //typecasting the integer to decimal
    return 0;
}
