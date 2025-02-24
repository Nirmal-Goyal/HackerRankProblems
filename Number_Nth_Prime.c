// Print the n-th prime number
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int count=0;
    int num=2;
  
    while(count<=n){
        int prime=1;
        for(int i=2; i*i<=num; i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            count++;
        }
        if(count==n){
            printf("%d", num);
            break;
        }
        num++;
    }   
    return 0;
}