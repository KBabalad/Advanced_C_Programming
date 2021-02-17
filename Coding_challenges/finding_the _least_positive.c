/*
Finding the least positive integer in an array!!!
*/


#include<stdio.h>
#include<stdlib.h>


int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int segregate(int arr[], int size)
{
    int j =0, i;
    for(i=0;i<size;i++)
    {
        if(arr[i]<=0)
        {
            swap(&arr[i],&arr[j]);
            j++;
        }
    }
    return j;
}

int finding_positive_number(int arr[], int size)
{
 int i;
 for(i=0;i<size;i++)
 {
     if(abs(arr[i])-1<size && arr[abs(arr[i])-1]>0)
     {
       arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
     }
 }
 for(i=0;i<size;i++)
 {
     if(arr[i]>0)
     {
      return i+1;
     }
     return size+1;
 }





