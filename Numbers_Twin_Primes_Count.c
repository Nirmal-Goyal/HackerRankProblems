// Given an integer N, write a program to count the number of twin prime pairs that exist in the range [1, N] (inclusive).
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int count=0;
    
    int p=2, q=2;
    while(p<=n && q<=n){
        int prime=1;
        for(int i=2; i*i<=p; i++){
            if(p%i==0){
                prime=0;
                break;
            }
        }
        for(int j=2; j*j<=q; j++){
            if(q%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1 && q-p==2){
            ++count;
            ++p;
        }
        if(q-p==2){
           ++p; 
        }
        q++;    
    }
    printf("%d", count);
    return 0;
}