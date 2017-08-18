#include <stdio.h>

void descending(int[],int);
int main()
{
  int array[100], n, c, d, swap;
  int max1,max2,max3;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

 descending(array,n);
 printf("Sorted list in descending order:\n");
 max1=array[0];
 max2=array[1];
 max3=array[2];
printf("max1:%d\nmax2:%d\nmax1:%d\n",max1,max2,max3);
  return 0;
}

void descending(int array[],int n){
int  c, d, swap;
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] < array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }		
}