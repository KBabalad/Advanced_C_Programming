
#include<stdio.h>
#include "extern_002.h"

extern int var;
extern int func(void);
int func_1(void);

int func_1(void)
{
    var =120;
    printf("var in func_1 = %d \n", var);
    return 0;
}


int main(void)
{
 var=10;// on this ocassion the extern key word is not allocated memory and cannot be changed so the compiler throws undefined reference error
 printf("Before func is cal'd %d\n", var);
 func();
 printf("After func is cal'd %d\n", var);
 func_1();
 return 0;
}


