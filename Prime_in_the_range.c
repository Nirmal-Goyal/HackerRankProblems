// Print all the prime numbers in ascending order of given range
#include <stdio.h>

int main() {

    int l, r;
    scanf("%d %d", &l, &r);
    
    for(int i=l; i<=r; i++){
        if(i<2){
            continue;
        }
        int prime = 1;
        int j=2; 
        while(j*j<=i){
            if(i%j==0){
                prime=0;
                break;
            }
            else{
                ++j;
            }
        }
        if(prime==1){
            printf("%d ", i);
        }     
    }
}