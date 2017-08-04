#include<stdio.h>
#include<assignment2.h>

int main(){
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	isLeapYear(year)?printf("leap"):printf("not leap");
	return 0;
}