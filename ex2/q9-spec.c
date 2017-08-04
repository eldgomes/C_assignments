#include<stdio.h>
#include<assignment2.h>

int main(){
	int n1,n2,n3;
	printf("enter n1,n2,n3\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	isFibonacci(n1,n2,n3)?printf("yes"):printf("no");
	return 0;
}


