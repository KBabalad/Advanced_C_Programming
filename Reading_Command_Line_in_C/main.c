#include <stdio.h>
#include <stdlib.h>

/*int main(int argc, char **argv)
{
   printf("The number of command line arguments are %d \n",argc);
   printf("The command line arguments are %s \n",argv[0]);
   for(int i=0;i<argc;i++)
   {
       printf("%d:%s\n",i+1,argv[i]);
   }
   getchar();
   return 0;
}*/

int main(int argc, char *argv[100])
{
    if(argc<10)
    {
     puts("Please specify the file name");
     return(1);
    }
    printf("Examine the file name %s \n",argv[1]);
    return(0);
}


/*
Output of the program:
The number of command line arguments are 4
The command line arguments are B:\Online Courses\Adv C Course\Reading_Command_Line_in_C\bin\Debug\Reading_Command_Line_in_C.exe
1:B:\Online Courses\Adv C Course\Reading_Command_Line_in_C\bin\Debug\Reading_Command_Line_in_C.exe (1st argument is the program location and the name)
2:Hi(The program is )
3:There
4:this is a test application



*/
