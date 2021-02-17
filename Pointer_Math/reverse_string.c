/*
In this exercise we will see the logic behind reversing a string or array integers
*/


#include<stdio.h>
#include<stdint.h>

int string_reverse(char base_address[100])
{
    char temp[100];
    int count =0;
    int i,j;

    while(base_address[count] != '\0')
    {
        count++;
    }
    printf("%d\n",count);

    j= count -1;
    for(i=0;i<count;i++)
    {
        temp[i] = base_address[j];
        j--;
    }
    temp[i]='\0';
    printf("%s\n",temp);

    return 0;

}

int main()
{
    char string[100];
    printf("Enter the String you want to reverse\n");
    gets(string);
    string_reverse(string);
    return 0;
}
