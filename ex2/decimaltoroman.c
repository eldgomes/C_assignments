#include<stdio.h>
#include"assignment2.h"

/*
M - 1000 
D - 500 
CM- 900
C - 100 
CD- 400
L - 50 
XC- 90
XL- 40 
IX- 9 
X - 10
V - 5  
IV- 4
*/

void decimaltoroman(int num){
		
        printf("Roman Number: ");
        while (num > 0) {
                if (num >= 1000) {
                        printf("M");
                        num = num - 1000;
                } 

		else if (num >= 500) {
                        if (num >= 900) {
                                printf("CM");
                                num = num - 900;
                        } else {
                                printf("D");
                                num = num - 500;
                        }
                } 

		else if (num >= 100) {                        
                        if (num >= 400) {
                                printf("CD");
                                num = num - 400;
                        } else {
                                printf("C");
                                num = num - 100;
                        }
                } 

		else if (num >= 50) {
                        if (num >= 90) {
                                printf("XC");
                                num = num - 90;
                        } else {
                                printf("L");
                                num = num - 50;
                        }
                } 

		else if (num >= 9) {                       
                        if (num >= 40) {
                                printf("XL");
                                num = num - 40;
                        } else if (num == 9) {
                                printf("IX");
                                num = num - 9;
                        } else {
                                printf("X");
                                num = num - 10;
                        }
                } 

		else if (num >= 4) {                        
                        if (num >= 5) {
                                printf("V");
                                num = num - 5;
                        } else {
                                printf("IV");
                                num = num - 4;
                        }
                } else {
                        printf("I");
                        num = num - 1;
                }
        }
        printf("\n");
}
