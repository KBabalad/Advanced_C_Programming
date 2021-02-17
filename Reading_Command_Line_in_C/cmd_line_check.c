/*
In this project file we can check whether on the command line argument how many arguments have been passed.
*/


#include<stdio.h>



int main(int argc, char *argv[])
{
    int counter;
    if(argc==1)
    {
        printf("No command line arguments have been entered except the file_name\n");
    }
    if(argc>=2)
    {
       printf("\n Number of command line arguments are %d",argc);
       printf("\n-----------Following are the commands arguments passed--------------");
       for(counter=0;counter<argc;counter++)
       {
           printf("\n argv[%d]: %s",counter, argv[counter]);
       }
       return 0;
    }

}
