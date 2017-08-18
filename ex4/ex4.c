#include <stdio.h>

void ascending(int[],int);
void descending(int[],int);
int main()
{
  int array[100], n, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 

 ascending(array,n);
 printf("Sorted list in ascending order:\n");
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
 
  descending(array,n);
 printf("Sorted list in descending order:\n");
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
  return 0;
}

void ascending(int array[],int n){
	int  c, d, swap;
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }		
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
