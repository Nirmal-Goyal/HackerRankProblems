// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits
// Print "YES" if the number is an Armstrong number, otherwise "NO"
#include <stdio.h>
#include<math.h>

int main() {
    int n;
    printf("enter the num: ");
    scanf("%d", &n);

    int count = log10(n)+1; 
    int original=n;     
    int sum=0;
    
    while(n>0){
        int rem = n%10;
        int product=1;
        for(int j=1; j<=count; j++){
            product = product*rem;
        }
        sum = sum + product;
        n=n/10;
    }
    
    if(sum==original)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}