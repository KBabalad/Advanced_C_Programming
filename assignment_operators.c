#include<stdio.h>
#include<stdlib.h>

int assignment_operator()
{
    int v =0;
    // doing various operations on variable v
    v = v+10;
    printf("the value of v after adding is %d \n", v);
    // lets use =+ to the variable
    v =+ 20;
    printf("the value of v after adding is %d \n", v);
    // observe the difference =+ and += where the value is assigned first and addition operation is carried next on the latter.
    v += 20;
    printf("the value of v after adding is %d \n", v);
}
/*
int main()
{
    assignment_operator();
}
*/
