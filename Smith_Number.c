// A Smith number is a composite number where the sum of its digits is equal to the sum of the digits of its prime factors (excluding the number itself)
// return 1 if number is smith number otherwise 0
#include <stdio.h>
int sum_num(int);
int prime_sum(int);

int is_smith_number(int n) {
    // checking weather number is composite or not?
    int prime=1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            prime=0;
        }
    }
    // if number is prime then it is not a smith number
    if(prime==1){
        return 0;
    }
    
    int add1 = sum_num(n);  // calling function for sum of its digit
    int add2 = prime_sum(n);  // calling function for sum of prime factors
    if(add1==add2){
        return 1;
    }
    else{
        return 0;
    }
}

// function for sum of its digit 
int sum_num(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

// function for sum of prime factors
int prime_sum(int n){
    int ans=0;
    int i=2;
    while(n!=1){
        if(n%i==0){
            ans=ans+sum_num(i);
            n=n/i;
        }
        else{
            ++i;
        }
    }
    return ans;
}

int main() {
    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));   // calling the smith number
    return 0;
}