#include <stdio.h>

int compareArrays(int[],int[]);

int main(void) {

        int array1[5];
        int array2[5];
        int i;


        for (i=0;i<5;i++) {        
                array1[i]=0;
        }


        for (i=0;i<5;i++) {        
                array2[i]=0;
        }

        printf("Enter 5 numbers for array 1: ");
        for (i=0;i<5;i++) {        
                scanf("%d", array1);
        }

        printf("Enter 5 numbers for array 2: ");
        for (i=0;i<5;i++) {        
                scanf("%d", array2);
        }

        //printf("%d",compareArrays(array1,array2));
        compareArrays(array1,array2)==1?printf("\nmatching arrays"):printf("\nnon matching arrays");

        return 0;
}

int compareArrays(int array1[], int array2[]){
	int i;
        for(i=0;i<5;i++)
                if (array1[i] != array2[i]){
                        return 0;
                }
                        
        return 1;       
}