// A Smith number is a composite number where the sum of its digits is equal to the sum of the digits of its prime factors (excluding the number itself)
#include <stdio.h>
int sum_num(int);
int prime_sum(int);

int is_smith_number(int n) {
    // Implement this function
    int prime=1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            prime=0;
        }
    }
    if(prime==1){
        return 0;
    }
    
    int add1 = sum_num(n);
    int add2 = prime_sum(n); 
    if(add1==add2){
        return 1;
    }
    else{
        return 0;
    }
}

int sum_num(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

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
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}