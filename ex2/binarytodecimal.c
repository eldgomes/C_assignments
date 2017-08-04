#include "assignment2.h"
int binarytodecimal(int binarynum){
	int decimal_val = 0, base = 1, rem;
    while (binarynum > 0){
        rem = binarynum % 10;
        decimal_val = decimal_val + rem * base;
        binarynum = binarynum / 10 ;
        base = base * 2;
    }
	return decimal_val;
}