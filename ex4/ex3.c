#include<stdio.h>
#include<assert.h> 
char student_marks[10] = {20, 45, 49,50,42,23,1,18,34,33};

int add_grace(int marks);

int main(){
	int i,add,marks;

	for (i=0;i<10;i++)
		if(student_marks[i]!=50){
			marks=add_grace(student_marks[i]);
			student_marks[i]=marks;			
		}

    	for (i=0;i<10;i++){         
		printf("%d", student_marks[i]);
		printf("\n");		
	}
	assert(add_grace(45) == 47);
	assert(add_grace(44) == 47);
	assert(add_grace(33) == 38);
	
	assert(add_grace(00) == 25);

	assert(add_grace(11) == 15);
	assert(add_grace(15) == 25);		
	return 0;
}

int add_grace(int marks){	
	if(marks==49)
			return marks+1;	
	if(marks>=45&&marks<49)
			return marks+2;
	if(marks>=40&&marks<=44)
			return marks+3;
	if(marks>=35&&marks<=39)
			return marks+4;
	if(marks>=30&&marks<=34)
			return marks+5;
	if(marks>=25&&marks<=29)
			return marks+6;
	if(marks<25)
			return marks+25;		
}
