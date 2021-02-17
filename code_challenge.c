#include<stdio.h>

int fetch_value()
{
    float value;
    printf("Enter a value:");
    scanf("%f",&value);
    printf("Your input value is %.1f\n",value);
    value *= 5;
    printf("Your input value after multiplication is %.1f\n",value );
    value /=3;
    printf("Your input value after division is %.1f\n",value );
    return value;
}

/*int main()
{
    fetch_value();
    return(0);
}*/
