/*
In this exercise we will see the results how an pointer variable is incremented.
*/

#include<stdio.h>
#include<stdint.h>

int main()
{
    int *fptr;
    int f;

    fptr = &f;
    *fptr = 89;
    printf("The value at the address fptr is %d\n", *fptr);
    printf("The value at the f is %d\n",f);
     printf("Incremented address at the pointer %d\n", *fptr++); // this will increment the address not the value because of operator precedence
    printf("Incremented value at the pointer %d\n", ++*fptr); //incrementing the value not the address

}
