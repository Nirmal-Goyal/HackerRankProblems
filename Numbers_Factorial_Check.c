// Print the integer x if N=x!, otherwise, print "NO"
#include <stdio.h>

int main() {

    long long n;
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
        printf("%d", i-1);
    }
    else{
        printf("NO");
    }
    return 0;
}