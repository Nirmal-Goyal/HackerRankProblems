// Print a single integer representing the count of prime digits in N
#include <stdio.h>

int main() {

    long long n;
    printf("enter the num: ");
    scanf("%lld", &n);
    int count=0;
    
    if(n<0){
        n=-n;
    }
    while(n>0){
        int rem = n%10;
        if(rem==2 || rem==3 || rem==5 || rem==7){
            ++count;
        }
        n=n/10;
    }
    printf("count of prime digits in num: %d", count);
    return 0;
}