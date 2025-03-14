// Given an integer N, write a program to count the number of twin prime pairs that exist in the range [1, N] (inclusive).
#include <stdio.h>
int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int count=0;
    
    // assuming starting twin prime pair is (2, 2) 
    int p=2, q=2;
    while(p<=n && q<=n){
        int prime=1;
        // check weather first digit of pair is prime or not
        for(int i=2; i*i<=p; i++){
            if(p%i==0){
                prime=0;
                break;
            }
        }
        // check weather second digit of pair is prime or not
        for(int j=2; j*j<=q; j++){
            if(q%j==0){
                prime=0;
                break;
            }
        }
        // if both digits are prime and their diff is 2, count that pair
        if(prime==1 && q-p==2){
            ++count;
            ++p;
        }
        // if diff of both digits are 2, increment the first digit because diff b/w twin prime can't be >2
        if(q-p==2){
           ++p; 
        }
        q++;    // increment the second digit after every iteration
    }
    printf("number of twin prime in the range of [1, %d] is: %d", n, count);
    return 0;
}