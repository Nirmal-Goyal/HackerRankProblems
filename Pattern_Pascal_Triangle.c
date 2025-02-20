// Printing Pattern of Pascal triangle
/*    1 
     1 1 
    1 2 1 
   1 3 3 1 
  1 4 6 4 1 
1 5 10 10 5 1    */

#include <stdio.h>

int main() {

    int n;
    printf("enter the num of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int num=1;
        for(int k=1; k<n-i+1; k++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", num);
            num = num*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}