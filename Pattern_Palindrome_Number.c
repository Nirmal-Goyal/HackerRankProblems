// Pattern_Palindrome Number with Zero
/* example - 
                                      0
                                    1 0 1
                                  2 1 0 1 2
                                3 2 1 0 1 2 3
                              4 3 2 1 0 1 2 3 4
                            5 4 3 2 1 0 1 2 3 4 5
                          6 5 4 3 2 1 0 1 2 3 4 5 6
                        7 6 5 4 3 2 1 0 1 2 3 4 5 6 7
                      8 7 6 5 4 3 2 1 0 1 2 3 4 5 6 7 8
                    9 8 7 6 5 4 3 2 1 0 1 2 3 4 5 6 7 8 9

*/

#include <stdio.h>

int main() {

    int n;
    printf("enter the num of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int num=i;
        for(int k=1; k<=n-i; k++){
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++){
            if(j<=i){
                printf("%d ", --num);
            }
            else{
                printf("%d ", ++num);
            }
        }
        printf("\n");
    }
    return 0;
}