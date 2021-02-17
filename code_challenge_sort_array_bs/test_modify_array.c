
/*
Modifying an Array will be a tedious process for beginners, So in this exercise we understand how do we modify an array by passing
the array's base address to the function.

In this exercise
1. Prompt the user to enter an array char or int.
2. Send the text to the function.
3. Function takes the string as an input and convert all text to uppercase and all the spaces to underscore.

*/

#include<stdio.h>
#include<stdint.h>
#include<ctype.h>
#include<stdlib.h>


void modify(char *arr);

int main()
{
    int n=20;
    char arr[n];
    printf("Input the desired string to be modified\n");
    fgets(arr,n,stdin);
    modify(arr);
    puts("Here is the modified string\n");
    printf("%s",arr);
    return(0);
}

void modify(char *arr)
{
    while(*arr)
    {
        *arr = toupper(*arr);
        if(*arr == ' ')
        {
            *arr = '_';
        }
        arr++;
    }
    return ;
}
