#include <stdio.h>
#include<string.h>

int checkvowel(char c);

void main(){
     int chasc,i,cnt=0;
     char ch,str[40]="",c;
     printf("enter string : ");
     gets(str);
	 printf("enter vowel : ");
     scanf("%c", &c);
	 
	 if(!checkvowel(c))
		 printf("enttered char not a vowel");
	 else{
		 for(i=0;str[i]!='\0';i++)
			 if(str[i]==c)
				 cnt++;
		printf("vowel occurs %d times",cnt);
	 }
}

int checkvowel(char c){
     switch(c){
          case'a' :
          case'A' :
          case'e' :
          case'E' :
          case'i' :
          case'I' :
          case'o' :
          case'O' :
          case'u' :
          case'U' :
          return 1;
		  default:
		  return 0;
     }
}