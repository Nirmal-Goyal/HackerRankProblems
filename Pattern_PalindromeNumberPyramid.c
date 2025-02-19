// Printing Pattern Palindrome Number Pyramid
#include <stdio.h>

int main() {

    int n;
    printf("enter the num of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int num=0;
        for(int k=1; k<n-i+1; k++){
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++){
            if(j<=i){
                printf("%d ", ++num);
            }
            else{
                printf("%d ", --num);
            }
        }
        printf("\n");
    }
    return 0;
}