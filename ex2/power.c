#include <assignment2.h>

int power(int base, int exponent){
	int result = 1;
    while (exponent != 0){
        result *= base;
        --exponent;
    }
	return result;
}