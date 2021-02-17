#include <stdio.h>
#include <stdlib.h>

int *array_function(void)
{
    static int array_1[10] ={2,3,5,7,11}; // if we are not using a static int here then the array value might change when passing
    return(array_1); //passing the base address of the array
}

int main()
{
    int x;
    int *array_2; // declaring an int variable of type pointer array
    array_2 = array_function(); // passing array function to an array variable both of type int
    for(x=0;x<10;x++)
    {
      printf("%d\n",array_2[x]);
    }
    return 0;
}


