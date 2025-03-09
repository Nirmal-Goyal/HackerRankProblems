// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits
// Print "YES" if the number is an Armstrong number, otherwise "NO"
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count=0; 
    int a=n;
    int original=n;     
    int sum=0;
    
    while(a>0){
        ++count;
        a=a/10;
    }
    
    for(int i=1; i<=count; i++){
        int rem = n%10;
        int product=1;
        for(int j=1; j<=count; j++){
            product = product*rem;
        }
        sum = sum + product;
        n=n/10;
    }
    
    if(sum==original){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}