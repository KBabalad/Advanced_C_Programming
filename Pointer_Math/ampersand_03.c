#include<stdio.h>
#include<stdint.h>


int main()
{
    int a[10],*ptr_a;
    ptr_a = &a[1]; // if we pass just the array variable a, then it usually carries the base address of the array
    printf("Address of the variable a is %p\n",a);
    printf("Address of the variable a is %p\n",ptr_a);
    printf("Address of the variable a is %p\n",&a[1]);
    return 0;
}


/*
The output show that all the addresses are the base address of the array
Address of the variable a is 0060FED4
Address of the variable a is 0060FED4
Address of the variable a is 0060FED4


If we want the base address of an array we need not know pass it has an pointer, by default if just give the array variable it stands
there as a base address of the pointer. If we want to navigate through the array then we need to use the & to tell the compiler that
the address of the array item apart from the first item
Address of the variable a is 0060FED4
Address of the variable a is 0060FED8
Address of the variable a is 0060FED8
*/
