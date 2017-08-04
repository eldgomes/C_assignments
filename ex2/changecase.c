#include"assignment2.h"

char changecase(char ch){
	if(ch>='A' && ch<='Z')
		return ch+32;
 else if(ch>='a' && ch<='z')
		return ch-32;
}