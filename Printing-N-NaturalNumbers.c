// Print all natural numbers from 1 to N
#include <stdio.h>

int main() {
   
    int N;
    printf("Enter the last number: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        printf("%d ", i);
    }
    
    return 0;
}