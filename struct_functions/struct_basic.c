
#include<stdio.h>
#include<stdlib.h>


typedef struct
{
 int age;
 char gender;
 char name[10];
}Person_t;

int check_function(Person_t *pPerson)
{
  if(pPerson == NULL)
  {
      printf("Null Pointer please exit\n");
      return 0;
  }
  else
  {
      printf("Age of the person is %d\n", pPerson->age);
      printf("Gender of the Person is %c \n", pPerson->gender);
      for(int i =0;i<5;i++)
      {
          printf("Gender of the Person is %s \n", (pPerson+i)->name);
      }
  }
  return 0;
}

int main()
{
  Person_t person_1; // creating a variable of type struct
  Person_t *pPerson_1; // allocating null pointer of type structure
  pPerson_1 = &person_1; // assigning the address of the Person_1 to the pointer variable
  person_1.age=27;
  person_1.gender ='M';
  printf("Enter the name: \n");
  for(int i=0;i<5;i++)
  {
   scanf("%c",person_1.name);
  }
  check_function(pPerson_1); // passing the address of Person_1

}
