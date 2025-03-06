// Print all cyclic rotations of N, one per line, in the order they are obtained by shifting the digit in the one's place to the left. The process stops when the number returns to its original configuration.
#include <stdio.h>
int main() {
    int n;
    printf("enter the num: ");  
    scanf("%d",&n);

    int count=0, x=1;
    int a=n;
    while(a>0)
    {
        count++;
        a=a/10;
        x=x*10;
    }
    x=x/10;

    int num;

    printf("cyclic rotation:\n");
    for(int i=1; i<=count; i++){
        num = (n%10)*x + (n/10);
        printf("%d\n", num);
        n=num;
    }   
}