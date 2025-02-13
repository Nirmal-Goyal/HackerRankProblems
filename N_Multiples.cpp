// Print the first n multiples of x 
#include <stdio.h>

int main() {

    int n, x;
    printf("enter how many multiples you want: ");
    scanf("%d", &n);
    printf("enter the number: ");
    scanf("%d", &x);
    for(int i=1; i<=n; i++){
        int mul=i*x;
        printf("%d ", mul);
    }

    return 0;
}