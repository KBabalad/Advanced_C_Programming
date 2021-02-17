/*
In this file we will explore how asterisk acts has a split personality on the pointer variable
So, How can we can remember this?,

If an asterisk is present with the variable then it is defining the value inside the variable. *p-> value
If an asterisk is not present beside the variable then it is pointing to address of the variable stored. p-> address

Lets discuss this with a variable
*/
 #include<stdio.h>
 #include<stdlib.h>

//char *string = "Greetings for Christmas";


 int main()
 {
 reverse_string();
 /*while(*string != '\0') // loop continues until the string value is '\0'(Null)
 {
     putchar(*string); // here the pointer variable string is holding the value
     string++; // here the pointer variable string is incrementing its address

 }*/

 return 0;
 }
