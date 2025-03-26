/*
You are given a number n. Print a square matrix pattern that follows a specific pattern as shown below.

For give n = 5, print:

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/
#include<stdio.h>
int main() {  
    
    int n;  
    scanf("%d", &n);  
    int size = (2*n)-1;
    int a[size][size];
    int t=n;
    
    for(int i=0; i<n; i++){
        for(int j=i; j<size-i; j++){
            
            a[i][j] = t; //top
            a[size-i-1][j] = t; //bottom
            
            a[j][i] = t; //left;
            a[j][size-i-1] = t; // right
        }
        t--;
    }
      

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;  
}