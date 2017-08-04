#include <stdio.h>
#include<assignment2.h>

#define PLANE_SPEED_KMPH 80
#define DECELERATION 2.85
#define RUNWAY_LENGTH_MTS 1400
#define FINAL_SPEED_KMPH 0

int main(){
	float distance;
	distance=(kmphtomps(FINAL_SPEED_KMPH)*kmphtomps(FINAL_SPEED_KMPH)-kmphtomps(PLANE_SPEED_KMPH)*kmphtomps(PLANE_SPEED_KMPH))/2*DECELERATION;
	distance<RUNWAY_LENGTH_MTS?printf("safe landing"):printf("unsafe landing");
	return 0;
}
	
