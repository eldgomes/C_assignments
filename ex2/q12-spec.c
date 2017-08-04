#include <stdio.h>
#include<assignment2.h>

int main(){
    long num;
    printf("Enter a decimal integer \n");
    scanf("%ld", &num);
    printf("Its binary equivalent is = %ld\n", decimaltobinary(num));
    return 0;
}
