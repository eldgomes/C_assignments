#include <stdio.h>
#include <assignment2.h>

int main(){
    int number;
    printf("Enter the number \n");
    scanf("%d", &number);
    printf("Sum of the digits %d = %d\n", number, sumofdigits(number));
	return 0;
}