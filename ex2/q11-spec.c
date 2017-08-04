#include<stdio.h>
#include<assignment2.h>

int main(){
    int  num;
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); /* maximum five digits */
    printf("Its decimal equivalent is = %d \n", binarytodecimal(num));
	return 0;
}