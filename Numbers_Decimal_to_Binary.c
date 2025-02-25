// convert decimal number into binary
#include <stdio.h>

int main() {

    int n; 
    printf("enter the num: ");
    scanf("%d", &n);
    int initial = n;
    int num=0;
    int x=1;
    while(n!=0){
        num = num + (n%2)*x;
        x = x*10;
        n = n/2;
    }
    printf("Binary equivalent of %d: %d", initial, num);
    return 0;
}