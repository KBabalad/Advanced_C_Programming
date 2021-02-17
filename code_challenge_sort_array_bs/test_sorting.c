/*

In this exercise we are going to test the logic how the sorting algorithms work
mainly there are three functions
1. Swap!!
2. Sort algo!!
3. main!!

*/

#include<stdio.h>
#include<stdlib.h>

//Providing the function prototypes
int swap(int* x, int* y);
int array_sort_algo(int* arr, int n);

int array_sort_algo(int *arr, int n)
{
  int i, j;
  for(i=0;i<n-1;i++)
  {
      for(j=0;j<(n-i-1);j++)
      {
          if(arr[j]>arr[j+1])
          {
              swap(&arr[j],&arr[j+1]);
          }
      }
  }
  return 0;
}

int swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}
int print_func(int *arr, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}

int main()
{
  int arr[5]={1,6,2,9,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("-----------array before sorting----------\n");
  print_func(arr,n);
  array_sort_algo(arr,n);
  printf("-----------array after sorting----------\n");
  print_func(arr,n);
  while(1);
}
