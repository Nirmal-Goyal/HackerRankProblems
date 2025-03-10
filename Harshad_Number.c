// A Harshad Number is a number that is divisible by the sum of its digits.
// Print weather number is Harshad or not?
#include <stdio.h>

int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int original = n;
    int sum=0;
    
    while(n>0){
        sum = sum + n%10;
        n = n/10;
    }
    if(original%sum==0){
        printf("%d is a harshad number", original);
    }
    else{
        printf("%d is not a harshad number", original);
    }
    return 0;
}
