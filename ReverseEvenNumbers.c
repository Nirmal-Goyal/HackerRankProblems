// Printing even numbers in reverse order
#include <stdio.h>

int main() {

    int n;
    printf("enter the last num: ");
    scanf("%d", &n);
    
    for(int i=n; i>=1; ){
        if(i%2==0){
            int a=i;
            printf("%d ", a);
            i-=2;
        }
        else{
            --i;
        }
        
        
    }
    
    return 0;
}