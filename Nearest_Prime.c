// Print the nearest prime number to N
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int a=0, b=0;
    
    if(n<=2){
        printf("2");
        return 0;
    }
    
    
    for(int i=n; i>=2; i--){
        int prime=1;
        int j=2;
        while(j<=i/2){
            if(i%j==0){
                prime=0; 
                break;
            }
            else{
                ++j;
            }
        }
        if(prime==1){
            a = i;
            break;
        }
    }
    
    for(int i=n+1; b==0; i++){
        int prime=1;
        int j=2;
        while(j<=i/2){
            if(i%j==0){
                prime=0; 
                break;
            }
            else{
                ++j;
            }
        }
        if(prime==1){
            b = i;
            break;
        }
    }   
        
    if((n-a)<=(b-n)){
        printf("%d", a);
    }
    else{
        printf("%d", b);
    }
    
    return 0;
}