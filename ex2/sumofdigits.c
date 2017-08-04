#include "assignment2.h"

int sumofdigits(int number){
	int digit,sum=0;
	 while (number > 0){
        digit = number % 10;
        sum  = sum + digit;
        number /= 10;
    }
	return sum;
}