// A Spy Number is a number where the sum of its digits equals the product of its digits.
#include <stdio.h>

int sum(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int mul(int n){
    int product = 1;
    while(n>0){
        int rem=n%10;
        product*=rem;
        n/=10;
    }
    return product;
}

int is_spy_number(int n) {
    int ans1=sum(n);
    int ans2=mul(n);
    if(ans1==ans2){
        return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n); \
    printf("%d\n", is_spy_number(n));
    return 0;
}