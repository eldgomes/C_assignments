
#include <stdio.h>
int main(){
    int a;
    float b;
    double c;
    char D;
    printf("Size of int: %d bytes\n",(int)sizeof(a)); //changed sizeof(a) to (int)sizeof(a)
    printf("Size of float: %d bytes\n",(int)sizeof(b)); //added ",",  changed sizeof(b) to (int)sizeof(b)
    printf("Size of double: %d bytes\n",(int)sizeof(c)); //added ")", changed sizeof(c) to (int)sizeof(c)
    printf("Size of char: %d byte\n",(int)sizeof(D)); //changed sizeofi(d) to sizeof(D), changed sizeof(D) to (int)sizeof(D)
    return 0;
}
