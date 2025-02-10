// Print all even numbers from 1 to N
#include <stdio.h>

int main() {

    int N;
    printf("Enter the last number: ");
    scanf("%d", &N);
    //Method 1 without using if-statement
    /*
    for(int i=2; i<=N; i+=2){
        printf("%d ", i);
    }
    */

    // Method 2 using if-statement
    for(int i=1; i<=N; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
    return 0;
}