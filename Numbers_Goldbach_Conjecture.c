// Goldbach's Conjecture asserts that every even integer greater than 2 can be expressed as the sum of two prime numbers
#include <stdio.h>
int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    // taking first prime as 3, because 2 is even and sum of 2 with any prime can't be even
    int p=3;
    int q;
    if(n%2==1){
        printf("No Solution");
        return 0;
    }
    
    while(p<=n/2){
        q=n-p;
        int prime=1;
        for(int i=2; i*i<=p; i++){
            if(p%i==0){
                prime=0;
                break;
            }
        }
        for(int j=2; j*j<=q; j++){
            if(q%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("Two primes are: %d %d", p, q);
            return 0;
        }
        p++;
    }
    printf("No Solution");
    
    return 0;
}