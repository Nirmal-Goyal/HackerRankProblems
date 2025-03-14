// An Automorphic Number is a number whose square ends with the same digits as the number itself.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int count=0;
    int original=n;
    
    int a=n;
    while(a>0){
        ++count;
        a=a/10;
    }
    
    int square = n*n;
    
    int x=1;
    for(int i=1; i<=count; i++){
        x = x*10;
    }
    
    int last = square%x;
    
    if(last==original){
        printf("%d is automorphic", original);
    }
    else{
        printf("%d is not automorphic", original);
    }
    return 0;
}
