/* In this program we will create a program which can actually pass a structure to a function for displaying purpose.
This is one of the important things for the beginners
*/




#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    char name[20];
    int age;
    char gender;
}Person_Records_t;


Person_Records_t Persons[3]=
{
    {"Karan",27,'M'},
    {"Nitish",27,'M'},
    {"Ram", 30, 'M'}
};

int max_records =3;

void display_records(Person_Records_t *pBaseAddr, int max_records)
{
   for(int i=0;i<max_records;i++)
   {
       printf("\n Age of %d element is %d: ",i,(pBaseAddr+i)->age);
       printf("\n Name of %d element is %s: ",i,(pBaseAddr+i)->name);
       printf("\n Gender of %d element is %c: ",i,(pBaseAddr+i)->gender);

   }
}

//prompt the user to add the values or accept the values.
int user_input(Person_Records_t *pBaseAddr, int max_records)
{
    printf("Enter the details of the user to create a record");
    for(int i=0;i<3;i++)
    {
        printf("\n Enter %d element name:\t",i);
        scanf("%s",&(pBaseAddr[i]).name);
        printf("\n Enter %d element age:\t",i);
        scanf("%d",&(pBaseAddr[i]).age);
        printf("\n Enter %d element gender:\t",i);
        scanf("%s",&(pBaseAddr[i]).gender);
    }
    return 0;
}

int main()
{
    user_input(Persons,max_records);
    display_records(Persons,max_records);
    return 0;
}
