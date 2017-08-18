#include<stdio.h>

int get_grade_count(char grade);
char student_grades[10] = "AABDABCBBA";

int main(){
	int i,count;
	char grade;

	printf("enter garde\n");
	scanf("%c", &grade);

	printf("number of people to get '%c' grade:%d ",grade,get_grade_count(grade));
	return 0;
}

int get_grade_count(char grade){
	int i,count=0;
	for(i=0;i<10;i++)
		if(student_grades[i]==grade)
			count++;
	return count;
}
