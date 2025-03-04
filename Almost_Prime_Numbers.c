// Print a single integer representing the count of almost prime numbers from 1 to N
/*
A number is called "almost prime" if it has exactly two prime factors (not necessarily distinct).
Given an integer N, count how many numbers from 1 to N (inclusive) are almost prime.
*/
#include <stdio.h>

int main() {
    int n;
    printf("enter the last integer n: ");
    scanf("%d", &n);   
    // initial count of almost prime numbers is 0
    int num=0;
    
    if(n<4){
        return 0;
    }
    
    for(int i=2; i<=n; i++){
        int a=i;
        int count = 0;
        int j=2;
        while(a!=1 && j<=i/2){
            if(a%j==0){
                ++count;
                a=a/j;
            }
            else{
                ++j;
            }
        }
        if(count==2){
            num = num+1;
        }       
    }
    printf("total count of almost prime numbers is: %d", num);
    
    return 0;
}