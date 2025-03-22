// You are given an array of size N-1 containing distinct integers from 1 to N (inclusive). This means exactly one number is missing from the sequence.
#include <stdio.h>
int main() {  
    int n;
    printf("enter the actual size of array: ");
    scanf("%d", &n);
    int arr[n-1]; // declare the array of n-1 size
    int sum=0;
    printf("enter the element of array: ");
    for(int i=0; i<=n-2; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    // missing element will be sum of first n elements - sum of elements of array
    printf("missing element is: %d", (n*(n+1))/2 - sum);
    return 0;
}