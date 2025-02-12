//Print all squares of numbers from 1 to N 
#include <stdio.h>

int main() {

    int N;
    printf("enter the last number: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        printf("%d ", i*i);
    }
    return 0;
}