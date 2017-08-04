#include <stdio.h>
#include<assignment2.h>
 
int main(){
    int num;
    printf("Enter an integer \n");
    scanf("%d", &num);
	num == revnum(num)?printf("Number is a palindrome \n"):printf("Number is not a palindrome \n");
	return 0;	
}