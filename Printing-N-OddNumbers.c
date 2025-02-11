//Print all odd numbers from 1 to N
#include <stdio.h>

int main() {

    int N;
    printf("enter the last number: ");
    scanf("%d", &N);

    // Method-1 using if-statement
    /*
    for(int i=1; i<=N; i++){
        if(i%2==1){
            printf("%d ", i);
        }
    }
    */

    // Method-2 without if-statement
    for(int i=1; i<=N; i+=2){
        printf("%d ", i);
    }
    return 0;
}