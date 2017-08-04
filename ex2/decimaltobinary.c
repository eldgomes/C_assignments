#include"assignment2.h"

long decimaltobinary(long num){
	long  remainder, base = 1, binary = 0;
    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
	return binary;
}