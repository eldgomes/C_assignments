#include<stdio.h>
#include<assignment2.h>

int main(){
	int number,i;
	float sum=0;
	printf("enter number for series: ");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
		sum=sum+1.0/factorial(i);		
	
	printf("\nsum of series=%f",sum);
	return 0;
}
