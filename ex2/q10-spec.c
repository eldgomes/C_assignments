#include<stdio.h>
#include<assignment2.h>

int main(){
	char ch;
	printf("Enter any character : ");
	scanf("%ch", &ch);
	printf("changed case of character : %c",changecase(ch));
	return 0;
}