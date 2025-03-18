// unique_digit_product(n) that returns the product of the unique digits present in the given number n. The product should only consider distinct digits, ignoring any repeating digits.
#include<stdio.h>
int main() {
    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    // storing the frequency of digits in number
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
    printf("product of unique digits are: %d", product);
    return 0;
}
