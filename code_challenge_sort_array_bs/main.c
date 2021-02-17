#include <stdio.h>
#include <stdlib.h>

int swap(int* x, int* y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  return 0;
}

int bubble_sort(int *arr, int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
         if(arr[j]>arr[j+1])
            {
            swap(&arr[j],&arr[j+1]);
            }
        }
    }
    return 0;
}

int print_array(int *arr, int arr_size)
{
   int i;
   for(i=0;i<arr_size;i++)
   {
       printf("%2d \t",arr[i]);
   }
   printf("\n");
   return 0;
}

int main()
{
    int arr[]={10,8,4,11,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    printf("-----Sorted Array------\n");
    print_array(arr,n);
    return 0;
}
