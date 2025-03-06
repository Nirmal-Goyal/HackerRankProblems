// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
#include <stdio.h>

int main() {
    int n;
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
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}