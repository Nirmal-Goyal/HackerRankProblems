// A number is called a Strong number if the sum of the factorials of its digits is equal to the number itself
#include <stdio.h>
int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int sum=0;
    int original=n;
    
    while(n>0){
        int rem=n%10;
        int product=1;
        while(rem>0){
            product = product*rem;
            --rem;
        }
        sum = sum+product;
        n=n/10;
    }
    if(sum==original){
        printf("YES, number is strong number");
    }
    else{
        printf("NO, number is not strong num");
    }
    return 0;
}