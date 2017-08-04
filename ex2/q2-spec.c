#include<stdio.h>
#include <assignment2.h>

int main(){
	float joules,seconds;
	printf("enter power in joules: ");
	scanf("%f",&joules);
	printf("\nenter time in seconds: ");
	scanf("%f",&seconds);
	printf("\npower consumption is %f kilowatts: ",joulestokW(joules,seconds));
	return 0;
}