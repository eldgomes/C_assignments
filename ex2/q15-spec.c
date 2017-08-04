#include <stdio.h>
#include<assignment2.h>

int main(){
    int base, exponent;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    printf("Answer = %d", power(base, exponent));
    return 0;
}