// An Evil Number is a number that has an even number of 1s in its binary representation
#include <stdio.h>

int is_evil_number(int n) {
    // Your code here to count 1s in binary
    int count=0;
    while(n>0){
        if(n%2==1){
            ++count;
        }
        n=n/2;
    }
    // return 1, if number is evil otherwise 0
    if(count%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    printf("enter the num: ");
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}