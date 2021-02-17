/*
In this we will see how we can reverse an integer number
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int number;
    int rev=0;
    int remainder;
    puts("Enter a number: \t");
    scanf("%d",&number);
    while(number!=0)
    {
        remainder = number % 10;
        rev = rev *10 + remainder;
        number = number /10;
    }
    printf("Reversed number is: %d\n", rev);
    return 0;


}
