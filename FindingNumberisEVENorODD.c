#include<stdio.h>
int main(){
    int n;
    printf("enter thr number: ");
    scanf("%d", &n);

    //finding number is even or odd using modulus operator
    /*
    if(n%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    */

    //finding number is even or odd using bitwise operator
    if((n&1)==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    } 

    return 0;
}