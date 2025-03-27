// A Spy Number is a number where the sum of its digits equals the product of its digits.
#include <stdio.h>

// function to find sum of digits
int sum(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

// function to find product of digits
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
    if(ans1==ans2){ // return 1 if num is spy number otherwise 0
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    printf("%d\n", is_spy_number(n));
    return 0;
}