// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
#include <stdio.h>

int main() {
    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int sum=0;
    
    int i=1;
    while(i<=n/2){
        if(n%i==0){
            sum = sum+i;
        }
        ++i;
        
    }
    if(sum==n){
        printf("YES, num is perfect number");
    }
    else{
        printf("NO, num is not a perfect number");
    }
    return 0;
}