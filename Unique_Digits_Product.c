// unique_digit_product(n) that returns the product of the unique digits present in the given number n. The product should only consider distinct digits, ignoring any repeating digits.
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int frequency[10]={0};
    int product=1;
    while(n>0){
        int rem=n%10;
        if(frequency[rem]==0){
            product*=rem;
            frequency[rem]++;
        }
        n/=10;
    }
    printf("%d", product);
    return 0;
}
