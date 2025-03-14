// An Automorphic Number is a number whose square ends with the same digits as the number itself.
#include <stdio.h>
int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int count=0;
    
    int a=n;
    int x=1;
    while(a>0){
        ++count;
        x=x*10;
        a=a/10;
    }
    
    int square = n*n;
    int last = square%x;
    
    if(last==n){
        printf("%d is automorphic", n);
    }
    else{
        printf("%d is not automorphic", n);
    }
    return 0;
}
