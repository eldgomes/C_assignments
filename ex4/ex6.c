#include<stdio.h>
#include<string.h>
#include<assert.h>

int palindrome(char str[]);

int main(){
	assert(palindrome("malayalam") == 1);
	assert(palindrome("eldridge") != 1);
	return 0;
}

int palindrome(char str[]){
	int i,len;

	len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i] != str[len-i-1])
			return 0;
	}
	return 1;	
}
