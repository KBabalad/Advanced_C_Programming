
/*
In this exercise we will accept an input string from the user and then we will write a small string sorting algorithm
here again the program includes 4 functions
1. Sorting algorithm
2. Swapping function
3. Display/Print Function
4. Main Function

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 60

int swap(char* x, char* y);
int string_sort_algo();
int print_func(char *arr, int x);

int swap(char* x, char*y)
{
    char temp;
    temp = *x;
    *x= *y;
    *y = temp;
    return 1;
}


int string_sort_algo()
{

    char string[SIZE];
    printf("Input the desired string:");
    fgets(string,SIZE,stdin);

    int i,j,length;
    length = strlen(string);
    //sorting the string
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(string[i]>string[j])
            {
                swap(&string[j],&string[i]);
            }
        }
    }
    for(int i=0;i<length;i++)
    {
        printf("%c \t",string[i]);
    }
    printf("\n");
    return 0;
}


int main()
{
    string_sort_algo();
    while(1);
}

