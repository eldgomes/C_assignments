#include"assignment2.h"

int isFibonacci(int n1,int n2, int n3){	
	if(n1==0&&n2==1&&n3==1)
		return 1;

	if(n1+n2==n3){
		n3=n2;
		n2=n1;
		n1=n3-n2;

		if((n1<0)&&(n2<1)&&(n3<1))
			return 0;

		return isFibonacci(n1,n2,n3);
	}
	return 0;		
}