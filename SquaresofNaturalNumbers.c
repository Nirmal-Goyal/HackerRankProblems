//Print all squares of numbers from 1 to N 
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d ", i*i);
    }
    return 0;
}