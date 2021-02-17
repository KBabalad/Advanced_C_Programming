/*
In this exercise we will see how the array and pointers go hand in hand
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arry[10] = "Hello";
    char *ptr;
    ptr = arry;
    for(int i=0; i<10;i++)
    {
        printf("%c\t",*(ptr+i));

    }
}
