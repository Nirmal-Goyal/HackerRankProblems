// Print the integer x if N=x!, otherwise, print "NO"
#include <stdio.h>

int main() {

    long long n;
    printf("enter the integer: ");
    scanf("%lld", &n);
    if(n==1){
        printf("1");
        return 0;
    }
    int i;
    for(i=1; n!=1; i++){
        if(n%i==0){
            n = n/i;
        }
        else{
            break;
        }
    }
    if(n==1){
        printf("integer is factorial of: %d", i-1);
    }
    else{
        printf("NO, integer is not a factorial of any number");
    }
    return 0;
}