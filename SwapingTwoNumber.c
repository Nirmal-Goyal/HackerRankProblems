#include <stdio.h>

int main() {

    int a, b;
    printf("numbers before swap: ");
    scanf("%d %d", &a, &b);
    
    // swaping of two number using third variable
    /*
    int temp=a;
    a=b;
    b=temp;
    */

    // swaping of number without using third variable
    /*
    a = a+b;
    b = a-b;
    a = a-b;
    */

    // swaping of two numbers using Bitwise Operator
    a=a^b;
    b=a^b;
    a=a^b;
    
    printf("numbres after swap: %d %d", a, b);
    return 0;
}