


#include<stdio.h>
#include<stdint.h>


int main()
{
    int a,*ptr_a;
    ptr_a = &a;
    printf("Address of the variable a is %p\n",&a);
    printf("Address of the variable b is %p\n",ptr_a);
    return 0;
}
/*
In this the output address is the same for both the variables:
Address of the variable a is 0060FEF8
Address of the variable b is 0060FEF8


*/
