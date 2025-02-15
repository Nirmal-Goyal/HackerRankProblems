// Printing odd numbers in reverse order
#include <stdio.h>

int main() {

    int n;
    printf("enter the last num: ");
    scanf("%d", &n);
    
    for(int i=n; i>=1; i-=2){
        int a=i;
        printf("%d ", a);
    }
    
    return 0;
}