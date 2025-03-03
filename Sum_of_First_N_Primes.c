// Print a single integer representing the sum of the first N prime numbers.
#include <stdio.h>

int main() {

    int n;
    printf("enter how many primes you want: ");
    scanf("%d", &n);
    int count=0;
    int num=2;
    int sum=0;
  
    while(count<=n){
        int prime=1;
        for(int i=2; i*i<=num; i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            count++;
            sum = sum+num;
        }
        if(count==n){
            printf("sum of first Nth prime is: %d", sum);
            break;
        }
        num++;
    }   
    return 0;
}