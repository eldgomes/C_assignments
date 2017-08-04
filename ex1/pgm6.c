#include<stdio.h>
 
int main() {
 
   int rad;
   float PI = 3.14, area, ci; //changed Pi to PI
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad); //added %
 
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area); //added %
 
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);
 
   return (0);
}
