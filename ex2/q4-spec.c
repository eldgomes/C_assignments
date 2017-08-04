#include <stdio.h>
#include<assignment2.h>

int main(){
	float kmph;
	printf("enter speed in km/h ");
	scanf("%f",&kmph);
	printf("speed in m/s: %.2fm/s", kmphtomps(kmph));
	return 0;
}