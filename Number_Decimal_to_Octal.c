// convert decimal number to octal number
#include<stdio.h>
int main(){
    int n;
    printf("enter the decimal num: ");
    scanf("%d", &n);
    int ans=0;
    int mul=1;
    while(n>0){
        int rem=n%8;
        ans=rem*mul + ans;
        mul*=10;
        n/=8;
    }
    printf("octal num is: %d", ans);
}