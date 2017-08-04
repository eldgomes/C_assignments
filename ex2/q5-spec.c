#include <stdio.h>
#include<assignment2.h>

#define CAR_SPEED_KMPH 80
#define TRUCK_MOVES_IN_SEC 3
#define DISTANCE_FROM_TRUCK 30
#define FINAL_SPEED_KMPH 0

int main(){
	float distance;
	distance=((kmphtomps(CAR_SPEED_KMPH)+kmphtomps(FINAL_SPEED_KMPH))/2)*TRUCK_MOVES_IN_SEC;
	distance<DISTANCE_FROM_TRUCK?printf("no collision"):printf("collision");
	return 0;
}
	
