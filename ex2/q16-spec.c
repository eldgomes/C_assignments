#include<stdio.h>
#include<assignment2.h>

#define MAXLINE 1000

char pattern[]="ould";

int main(){
	char line[MAXLINE],index;
	int found=0;

	while(getsline(line,MAXLINE)>0){
		index=strindex(line,pattern);
		if(index==-1)
			printf("\npattern not found in line\n");
		else
			printf("\npattern found at index %d\n",index);
	}
	return 0;
}

