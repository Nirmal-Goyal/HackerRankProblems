// You are given an array of size N-1 containing distinct integers from 1 to N (inclusive). This means exactly one number is missing from the sequence.
#include <stdio.h>
int main() {  
    int n;
    scanf("%d", &n);
    int arr[n-1];
    int sum=0;
    for(int i=0; i<=n-2; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("%d", (n*(n+1))/2 - sum);
    return 0;
}