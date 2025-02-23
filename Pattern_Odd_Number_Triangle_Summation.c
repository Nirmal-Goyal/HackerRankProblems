// Pattern_Odd Number Triangle Summation
/*
        1
      3 8 5 
    7 9 40 11 13 
  15 17 19 120 21 23 25 
27 29 31 33 272 35 37 39 41 
*/
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int k=1; k<n-i+1; k++){
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++){
            if(j!=i || (i==1 && j==1)){
                printf("%d ", num); 
                num += 2;
            }
            else{
                int sum = (num-1)*(i+j-2);
                printf("%d ", sum);
            }
        }
        printf("\n");
    }
    return 0;
}