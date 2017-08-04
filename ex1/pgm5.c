

#include <stdio.h>
 
int main()
{
  int array[100], maximum, size, c, location = 1;
 
 printf("Enter the number of elements in array\n"); //added ;
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]); //added ,
 
  maximum = array[0]; //changed maxium to maximum
 
  for (c = 1; c < size; c++) //changed : to ;
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1; //changed : to ;
    }
  }
 
  return 0;
}
