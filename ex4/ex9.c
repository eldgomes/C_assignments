#include<stdio.h>

int stringLength(char str[]);
void stringCopy(char sstr[],char dstr[]);
void stringConcatenate(char str1[], char str2[]);
int stringNCopy(char sstr[],char dstr[],int len);

int main(){
	int n;
	char string1[50],string2[50];

	printf("Enter source string: ");
	fgets(string1,30,stdin);
	printf("Enter destination string: ");
	fgets(string2,30,stdin);

	stringLength(string1);
	stringCopy(string1,string2);
	printf("\nEnter the number of characters to be copied from %s to %s: ",string2,string1);
	scanf("%d",&n);
	stringNCopy(string1,string2,n);
	stringConcatenate(string1,string2);
	return 0;
}

int stringLength(char str[]){
	int strlen=1;

	while(str[strlen] != '\0')
		strlen++;
	printf("*******************string length***************\n");
	printf("The string length of %s is %d.\n",str,strlen);
	return strlen;
}

void stringCopy(char sstr[],char dstr[]){
	int i=0;
	
	printf("*******************copy a to b***************\n");
	printf("Before copying:Source string: %sDestination string: %s\n",sstr,dstr);
	while(sstr[i] != '\0'){	
		dstr[i] = sstr[i];
		i++;
	}
	dstr[i] = '\0';
	printf("After copying:Source string: %sDestination string: %s\n",sstr,dstr);
	
}
void stringConcatenate(char str1[], char str2[]){
	
	printf("*******************concatenation***************\n");
	int i,j=0;
	for(i = 0; str1[i] != '\0'; ++i);
	i--;
    for(j = 0; str2[j] != '\0'; ++j, ++i){
        str1[i] = str2[j];
    }

    str1[i] = '\0';
	printf("Concatenated string is :%s\n",str1);
}

int stringNCopy(char sstr[],char dstr[],int len){
	
	printf("*******************n copy***************\n");
	int i=0;
	printf("Before copying %d chars:\nSource string: %sDestination string: %s",len,sstr,dstr);
	while(i<len){	
		dstr[i] = sstr[i];
		i++;
	}
	dstr[i] = '\0';
	printf("\nAfter copying %d chars:\nSource string: %sDestination string: %s\n",len,sstr,dstr);
	return 0;
}