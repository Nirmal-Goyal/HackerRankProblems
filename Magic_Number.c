// A number is considered a Magic Number if the repeated sum of its digits eventually results in 1
#include <stdio.h>

int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int original=n;
    
    // for repeatation sum
    while(n>9){
        int sum=0;
        while(n>0){
            sum = sum + (n%10);
            n=n/10;
        }
        n=sum;
    }
    if(n==1){
        printf("%d is a magic number", original);
    }
    else{
        printf("%d is not a magic number", original);
    }
    
    
    
    return 0;
}