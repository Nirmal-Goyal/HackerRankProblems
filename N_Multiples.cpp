// Print the first n multiples of x 
#include <stdio.h>

int main() {

    int n, x;
    scanf("%d %d", &n, &x);
    for(int i=1; i<=n; i++){
        int a=i*x;
        printf("%d ", a);
    }

    return 0;
}