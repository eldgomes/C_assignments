#include<stdio.h>
#include<assert.h>

void searchIndices(char* , char* );

int main(){
	int position;
	char string[200],key[10];
	
	printf("\nEnter string:\n");
	fgets(string,200,stdin);	
	printf("\nEnter the key string to be searched:\n");
	scanf("%s",key);
	searchIndices(string,key);
	
	return 0;
}

void searchIndices(char i_str[], char k_str[]){	
	int i=0,j=0,lock=0;
	while(i_str[i] != '\0'){
		while(k_str[j] == i_str[i]){
			lock = i-j;
			if(k_str[j+1] == '\0' )
				printf("String found in location %d\n" ,lock+1);
			j++;
			i++;
		}
		j=0;
		i++;
	}
	if(lock == 0)
		printf("%s string not found in %s",k_str,i_str);
}