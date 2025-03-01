// Sum of prime factors of N
#include <stdio.h>

int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    // initialized the sum of prime factors with 0
    int sum = 0;
    // prime factors start from '2'
    int i=2;
    while(n!=1){
        if(n%i==0){
            sum = sum + i;
            n = n/i;  // divide with same prime factor
        }
        else{
            ++i;
        }
    }
    printf("sum of all prime factors is: %d", sum);
    return 0;
}