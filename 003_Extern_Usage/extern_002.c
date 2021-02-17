/*
In this program we are discussing the use of extern key word on variables
*/

#include<stdio.h>

int var;
extern int func(void);

extern int func(void)
{
    var =100;
    return 0;
}
