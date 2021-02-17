/*
In this exercise we will see how we can use ampersand and the * to see the address of variable!!
*/


#include<stdio.h>
#include<stdint.h>


int main()
{
    int a;
    char b;
    char c[10];
    float d;
    printf("Address of the variable a is %p\n",&a);
    printf("Address of the variable b is %p\n",&b);
    printf("Address of the variable c is %p\n",&c[1]);
    printf("Address of the variable d is %p\n",&d);
    return 0;
}
