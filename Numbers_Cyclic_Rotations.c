// Print all cyclic rotations of N, one per line, in the order they are obtained by shifting the digit in the one's place to the left. The process stops when the number returns to its original configuration.
#include <stdio.h>
int main() {
    int n,count=0,num;  
    scanf("%d",&n);
    
    int x=1;
    int a=n;
    while(a>0)
    {
        count++;
        a=a/10;
        x=x*10;
    }
    x=x/10;
    
    for(int i=1; i<=count; i++)
    {
        num=(n%10)*x+n/10;
        printf("%d\n",num);
        n=num;
    }
}