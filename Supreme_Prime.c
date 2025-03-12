/* A number N is called a Supreme Prime if:
N is a prime number.
The sum of its digits is also a prime number. */

#include <stdio.h>
int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int sum=0;
    
    if(n==1){
        printf("NO");
        return 0;
    }

    int prime1=1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            prime1=0;
        }
    }
    
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    
    int prime2=1;
    for(int i=2; i*i<=sum; i++){
        if(sum%i==0){
            prime2=0;
        }
    }
    
    if(prime1==1 && prime2==1){
        printf("YES, number is supreme prime");
    }
    else{
        printf("NO, number is not supreme prime");
    }
        
    return 0;
}