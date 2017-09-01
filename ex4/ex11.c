#include<stdio.h>
#define MAXLINE 1000

int getsline(char line[], int max);
int strindex(char source[],char searchfor[]);

char pattern[]="ould";

int main(){
	char line[MAXLINE],index;
	int found=0;

	while(getsline(line,MAXLINE)>0){
		index=strindex(line,pattern);
		if(index==-1)
			printf("pattern not found in line\n");
		else
			printf("pattern found at index %d\n",index);
	}
	return 0;
}

int getsline(char s[],int lim){
	int c,i;
	i=0;
	while(--lim>0&&(c=getchar())!=EOF&&c!='\n')
		s[i++]=c;
	if(c=='\n')
		s[i++]=c;
	s[i]='\0';
	return i;
}

int strindex(char s[], char t[]){
	int i,j,k;
	for(i=0;s[i]!='\0';i++){
		for(j=i,k=0;t[k]!='\0'&& s[j]==t[k];j++,k++);
		if(k>0&&t[k]=='\0')
			return i;
	}
	return -1;
}