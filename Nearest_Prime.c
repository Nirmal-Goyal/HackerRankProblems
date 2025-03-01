// Print the nearest prime number to N
#include <stdio.h>

int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    
    int a=0, b=0;
    
    if(n<=2){
        printf("nearest prime is: 2");
        return 0;
    }
    
    // checking nearest lower prime num
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
    

    // checking nearest higher prime num
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
       
    // checking which one is more nearest higher or lower
    if((n-a)<=(b-n)){
        printf("nearest prime num is: %d", a);
    }
    else{
        printf("nearest prime num is: %d", b);
    }
    
    return 0;
}