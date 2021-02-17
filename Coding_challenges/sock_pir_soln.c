/*
In this exercise we are actually interested in writing a solution where in an array of numbers represent individual sock color
our job is to actually pair the socks in twos and give the output from the function saying how many of them are pairs?

*/


#include<stdio.h>


int sock_pair_soln(int n, int *arr)
{
  int i,j;
  int arr_count=0;
  printf("The number socks is %d\n",n);
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
         arr_count= arr_count+1;
        }
        j++;
      }

  }
printf("Number of pair of socks is %d \n", arr_count);

while(1);
}

int main()
{
  int n;
  n=10;
  int arr[10]={1,7,2,8,3,9,4,10,5,11};
  sock_pair_soln(n,arr);
}
